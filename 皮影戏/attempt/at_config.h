#ifndef __AT_CONFIG_H__
#define __AT_CONFIG_H__



#ifndef M_PI
#  define M_PI  3.14159265358979323846
#endif

//  Define M_PI in the case it's not defined in the math header file


namespace AttemptSpace
{
	// Log�õ�����ַ�����
	const int MaxLogLen = 10240; 

	//  ������С����������ֹ��0��
	const float  DivideByZeroTolerance = float(1.0e-07);

	//  �Ƕ�ת���ȵ�ϵ�� 
	const float  DegreesToRadians = M_PI / 180.0f;

} // end namespace AttemptSpace

#endif // define __AT_CONFIG_H__
