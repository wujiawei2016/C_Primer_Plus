#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <float.h>
/*
	����:4.5 
	
	Cͷ�ļ�limits.h��float.h�ֱ��ṩ�����������ͺ͸������ʹ�С������ص���ϸ��Ϣ��
	��int���͵����ֵINT_MAX,��СֵINT_MIN
	float.hͷ�ļ���Ҳ����һЩ��ʾ��������FLT_DIG��DBL_DIG���ֱ��ʾfloat���ͺ�double���͵���Ч����λ����
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