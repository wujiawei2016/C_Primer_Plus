#include <stdio.h>
/*
	����:

	��printf������˵ * ���η� ���ܵ����������η�, ���ڶ����ӡ�Ŀ��, 
	�ñȶ�����һ������,���������Ҫ��ֵ,���ֵ�������������ӡ�Ŀ��
	Ҳ�൱��һ��ռλ��,�����ں�����Ҫ��һ����Ӧ����ֵ
	//������̬�Ķ����ӡ���
	//����scanf()������,* ���η����������ֵ������
*/
int example_4_7_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is example_4_7 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");

	/*unsigned width, precision;
	int number = 256;
	double weight = 242.5;
	printf("Enter a field width:\n");
	scanf("%d", &width);
	printf("The number is :%*d:\n", width, number);
	printf("Now enter a width and a precision:\n");
	scanf("%d %d", &width, &precision);
	printf("Weight = %*.*f\n", width, precision, weight);
	printf("Done!\n");*/
	printf("* * * * * * * * * * * * * * * *\n");
	int n;
	printf("Please enter three integers:\n");
	scanf("%*d %*d %d", &n);
	printf("The last integer was %d\n", n);
	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}