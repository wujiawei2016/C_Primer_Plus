#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <float.h>
/*
	����:4.5 
	
	Cͷ�ļ�limits.h��float.h�ֱ��ṩ�����������ͺ͸������ʹ�С������ص���ϸ��Ϣ��
	��int���͵����ֵINT_MAX,��СֵINT_MIN
	����Ϊ��ϸ����:��ֵΪһ�����,���ݲ�ͬϵͳ��Щֵ��䶯
	CHAR_BIT	8	����һ���ֽڵı�������
	SCHAR_MIN	-128	����һ���з����ַ�����Сֵ��
	SCHAR_MAX	127	����һ���з����ַ������ֵ��
	UCHAR_MAX	255	����һ���޷����ַ������ֵ��
	CHAR_MIN	0	�������� char ����Сֵ����� char ��ʾ��ֵ��������ֵ���� SCHAR_MIN��������� 0��
	CHAR_MAX	127	�������� char �����ֵ����� char ��ʾ��ֵ��������ֵ���� SCHAR_MAX��������� UCHAR_MAX��
	MB_LEN_MAX	1	������ֽ��ַ��е�����ֽ�����
	SHRT_MIN	-32768	����һ�������͵���Сֵ��
	SHRT_MAX	+32767	����һ�������͵����ֵ��
	USHRT_MAX	65535	����һ���޷��Ŷ����͵����ֵ��
	INT_MIN	-32768	����һ�����͵���Сֵ��
	INT_MAX	+32767	����һ�����͵����ֵ��
	UINT_MAX	65535	����һ���޷������͵����ֵ��
	LONG_MIN	-2147483648	����һ�������͵���Сֵ��
	LONG_MAX	+2147483647	����һ�������͵����ֵ��
	ULONG_MAX	4294967295	����һ���޷��ų����͵����ֵ��

	

	float.hͷ�ļ���Ҳ����һЩ��ʾ��������FLT_DIG��DBL_DIG���ֱ��ʾfloat���ͺ�double���͵���Ч����λ����
	C ��׼��� float.h ͷ�ļ�������һ���븡��ֵ��ص�������ƽ̨�ĳ�������Щ�������� ANSI C ����ģ����ó�������п���ֲ�ԡ��ڽ�����Щ����֮ǰ�������Ū������������������ĸ�Ԫ����ɵģ�

	���	�������
	S		���� ( +/- )
	b		ָ����ʾ�Ļ�����2 ��ʾ�����ƣ�10 ��ʾʮ���ƣ�16 ��ʾʮ�����ƣ��ȵ�...
	e		ָ����һ��������Сֵ emin �����ֵ emax ֮���������
	p		���ȣ����� b ����Чλ��
	�������� 4 ����ɲ��֣�һ����������ֵ���£�
	floating-point = ( S ) p x be
	��floating-point = (+/-) precision x baseexponent
	���¼������Ҿ���Ҫ�õĵ���:
	��Щ�궨���� FLT_RADIX �����е�λ��---FLT_MANT_DIG; DBL_MANT_DIG; LDBL_MANT_DIG
	��Щ�궨���������޸���ֵ---FLT_MAX 1E+37;DBL_MAX 1E+37;LDBL_MAX 1E+37

*/
#define DENSITY 62.4
int example_4_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_4_2 \7\n");
	printf("* * * * * * * * * * * * * * * *\n");
	
	printf("Some number limits for this system:\n");
	printf("Biggest int: %d\n", INT_MAX);
	printf("Smallest long long: %lld\n", LLONG_MIN);
	printf("One byte = %d bits on this system.\n", CHAR_BIT);
	printf("Largest double: %e\n", DBL_MAX);
	printf("Smallest normal float: %e\n", FLT_MIN);
	printf("float precision = %d digits\n", FLT_DIG);
	printf("float epsilon = %e\n", FLT_EPSILON);

	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}