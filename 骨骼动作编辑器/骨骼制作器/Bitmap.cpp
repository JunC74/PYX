#include "Bitmap.h"

Bitmap::Bitmap(HDC hDC, LPTSTR szFileName) : m_hBitmap(NULL), m_iWidth(0), m_iHeight(0)
{
	LoadFromFile(hDC, szFileName);
}

Bitmap::Bitmap(HDC hDC, int iWidth, int iHeight, COLORREF crColor) : m_hBitmap(NULL), m_iWidth(0), m_iHeight(0)
{
	Create(hDC, iWidth, iHeight, crColor);
}

Bitmap::Bitmap()
{
    m_hBitmap = NULL;
    m_iHeight = m_iWidth = 0;
}

Bitmap::~Bitmap()
{
	Free();
}


void Bitmap::Free()
{
	if (m_hBitmap != NULL)
	{
		DeleteObject(m_hBitmap);
		m_hBitmap = NULL;
	}
}

Bitmap* Bitmap::CreateBitmap(HDC hdc, LPTSTR szFileName)
{
    Bitmap *new_object = new Bitmap();
    if (new_object->LoadFromFile(hdc, szFileName) == true)
    {
        return new_object;
    }
    else
    {
       delete new_object;
       return NULL;
    }
}
Bitmap* Bitmap::CreateBitmap(HDC hDC, int iWidth, int iHeight, COLORREF crColor)
{
    Bitmap *new_object = new Bitmap();
    if (new_object->Create(hDC, iWidth, iHeight, crColor))
    {
        return new_object;
    }
    else
    {
        delete new_object;
        return NULL;
    }
}

BOOL Bitmap::LoadFromFile(HDC hDC, LPTSTR szFileName)
{
	Free();

	HANDLE hFile = CreateFile(szFileName, GENERIC_READ, FILE_SHARE_READ ,NULL,
		OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if(hFile == INVALID_HANDLE_VALUE)
		return false;

	BITMAPFILEHEADER bmfHeader;//位图文件头信息
	DWORD dwBytesRead;
	int bval = ReadFile(hFile, &bmfHeader,sizeof(BITMAPFILEHEADER),&dwBytesRead, NULL);
	if( (!bval) || (dwBytesRead!=sizeof(BITMAPFILEHEADER)) || (bmfHeader.bfType!=0x4D42))
	{
		CloseHandle(hFile);
		return false;
	}

	BITMAPINFO bmi;
	bval = ReadFile(hFile, &bmi, sizeof(BITMAPINFOHEADER), &dwBytesRead, NULL);
	if( (!bval) || (dwBytesRead!=sizeof(BITMAPINFOHEADER)))
	{
		CloseHandle(hFile);
		Free();
		return false;
	}

	m_iWidth = (int)bmi.bmiHeader.biWidth;
	m_iHeight = (int)bmi.bmiHeader.biHeight;

	m_hBitmap = (HBITMAP)LoadImage(NULL, szFileName, IMAGE_BITMAP, 0,0,LR_LOADFROMFILE|LR_CREATEDIBSECTION);
	if(m_hBitmap == NULL)
		return false;
	
	return true;
}

BOOL Bitmap::Create(HDC hDC, int iWidth, int iHeight, COLORREF crColor)
{
	m_hBitmap = CreateCompatibleBitmap(hDC, iWidth, iHeight);
	if (m_hBitmap == NULL)
		return false;

	m_iWidth = iWidth;
	m_iHeight = iHeight;

	HDC hMemDC = CreateCompatibleDC(hDC);

	HBRUSH hBrush = CreateSolidBrush(crColor);

	HBITMAP hOldBitmap = (HBITMAP)SelectObject(hMemDC, m_hBitmap);

	RECT rcBitmap = { 0, 0, m_iWidth, m_iHeight };
	FillRect(hMemDC, &rcBitmap, hBrush);

	SelectObject(hMemDC, hOldBitmap);
	
	DeleteDC(hMemDC);
	DeleteObject(hBrush);

	return true;
}

void Bitmap::Draw(HDC hDC, int x, int y)
{
	if (m_hBitmap != NULL)
	{
		HDC hMemDC = CreateCompatibleDC(hDC);
		
		HBITMAP hOldBitmap = (HBITMAP)SelectObject(hMemDC, m_hBitmap);
		
		BitBlt(hDC, x, y, m_iWidth, m_iHeight, hMemDC, 0, 0, SRCCOPY);

		SelectObject(hMemDC, hOldBitmap);
		DeleteDC(hMemDC);
	}
}

void Bitmap::Draw(HDC hDC, int x, int y, bool bTrans, COLORREF crTransColor)
{
	DrawPart(hDC, x, y, 0,0, m_iWidth, m_iHeight, bTrans, crTransColor);
/*	if (m_hBitmap != NULL)
	{
		HDC hMemDC = CreateCompatibleDC(hDC);

		HBITMAP hOldBitmap = (HBITMAP)SelectObject(hMemDC, m_hBitmap);

		//对于8位位图，需要设置逻辑调色板
//		SetDIBColorTable(hMemDC, 0, 256, palette);
		if(!bTrans)
			BitBlt(hDC, x, y, m_iWidth, m_iHeight, hMemDC, 0, 0, SRCCOPY);
			
		else
			TransparentBlt(hDC, x, y, m_iWidth, m_iHeight, hMemDC, 0, 0, m_iWidth, m_iHeight, crTransColor); 
			
		SelectObject(hMemDC, hOldBitmap);
		DeleteDC(hMemDC);
	}
*/
}

void Bitmap::DrawPart(HDC hDC, int dest_x,int dest_y, int src_x,int src_y, int part_width , int part_height,
			  bool bTrans, COLORREF crTransColor)
{
	if (m_hBitmap != NULL)
	{
		HDC hMemDC = CreateCompatibleDC(hDC);

		HBITMAP hOldBitmap = (HBITMAP)SelectObject(hMemDC, m_hBitmap);

		if(!bTrans)
			BitBlt(hDC, dest_x, dest_y, part_width, part_height, hMemDC, src_x, src_y, SRCCOPY);

		else
			TransparentBlt(hDC, dest_x, dest_y, part_width, part_height, hMemDC, src_x, src_y, part_width, part_height, crTransColor); 

		SelectObject(hMemDC, hOldBitmap);
		DeleteDC(hMemDC);
	}
}
