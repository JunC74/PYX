#include <windows.h>
#include <atlimage.h>
#include "cimage.h"

// ȡ����ͼ�����������ֵ��pImgSrcΪͼ��ָ�룬x,yΪ�������꣬�������ص�����ֵ������0��ʾ����
BYTE GetPixelIndex(const CImage* pImgSrc,long x,long y)
{
	if ((pImgSrc == NULL)||(pImgSrc->IsIndexed() == false)) return 0;// ͼ��ָ��Ϊ�ջ�������ͼ���򷵻�0

	if ((x < 0)||(y < 0)||(x >= pImgSrc->GetWidth())||(y >= pImgSrc->GetHeight())) //�ж���������Ϸ���
		return 0;

	BYTE* pDst = (BYTE*)pImgSrc->GetPixelAddress(x,y);//ȡ����ֵ��ַ
	if (pImgSrc->GetBPP() == 8){	//����ֵ��8λ��ʾ
		return *pDst;
	} else {
		BYTE pos;
		BYTE iDst = *pDst;
		if (pImgSrc->GetBPP() == 4){//����ֵ��4λ��ʾ
			pos = (BYTE)(4 * (1 - x % 2));
			iDst &= (0x0F << pos);
			return (BYTE)(iDst >> pos);
		} else if (pImgSrc->GetBPP() == 1){//����ֵ��1λ��ʾ(��ֵͼ��)
			pos = (BYTE)(7 - x % 8);
			iDst &= (0x01 << pos);
			return (BYTE)(iDst >> pos);
		}
	}
	return 0;
}

// ���ݵ�ɫ������ֵȡ����ֵ��pImgSrcΪͼ��ָ�룬idxΪ����ֵ������RGBQUAD�ṹ������ֵ
RGBQUAD GetPaletteColor(const CImage* pImgSrc, BYTE idx)
{
	RGBQUAD rgb = {0,0,0,0};
	if ((pImgSrc)&&(pImgSrc->IsIndexed())){
		int ncolors = pImgSrc->GetMaxColorTableEntries();//ȡ��ɫ����ɫ��Ŀ
		RGBQUAD *prgbColors = new RGBQUAD[ncolors]; 
		pImgSrc->GetColorTable(0,ncolors,prgbColors);//ȡ��ɫ��
		if (idx < ncolors)
			rgb = prgbColors[idx];//�õ�����ֵ
		delete [] prgbColors;
	}	
	return rgb;
}

//ȡ������ɫֵ��������ͼ��ͷ�����ͼ�������
RGBQUAD GetPixelColor(const CImage* pImgSrc,long x,long y)
{
	RGBQUAD rgb={0,0,0,0};
	if ((!pImgSrc)||(x < 0)||(y < 0)||(x >= pImgSrc->GetWidth())||(y >= pImgSrc->GetHeight()))
		return rgb;

	if (pImgSrc->IsIndexed()){//����ͼ��
		rgb = GetPaletteColor(pImgSrc,GetPixelIndex(pImgSrc,x,y));
	} else {//������ͼ��
		BYTE* iDst  = (BYTE*)pImgSrc->GetPixelAddress(x,y);
		rgb.rgbBlue = *iDst++;
		rgb.rgbGreen= *iDst++;
		rgb.rgbRed  = *iDst++;
		if(pImgSrc->GetBPP() > 24)
			rgb.rgbReserved = *iDst;
	}
	return rgb;
}