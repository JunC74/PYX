
// ȡ����ͼ�����������ֵ��pImgSrcΪͼ��ָ�룬x,yΪ�������꣬�������ص�����ֵ������0��ʾ����
BYTE GetPixelIndex(const CImage* pImgSrc,long x,long y);

// ���ݵ�ɫ������ֵȡ����ֵ��pImgSrcΪͼ��ָ�룬idxΪ����ֵ������RGBQUAD�ṹ������ֵ
RGBQUAD GetPaletteColor(const CImage* pImgSrc, BYTE idx);


//ȡ������ɫֵ��������ͼ��ͷ�����ͼ�������
RGBQUAD GetPixelColor(const CImage* pImgSrc,long x,long y);