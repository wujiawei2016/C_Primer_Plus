#include <stdio.h>
/*
	����4.13,4.14:printf ����ֵ������ ���ַ� ���������� 
*/
int example_4_5_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is example_4_5 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");

	//����4.13
	//int bph2o = 212;
	int bph2o = 22;
	int rv;
	rv = printf("%d F is water's boiling point.\n", bph2o);
	printf("The printf() function printed %d characters.\n",rv);
	//����4.13, 4.14:
	printf("Here's one way to print a ");
	printf("long string.\n");
	/*����1��ʹ�ö��printf()��䡣��Ϊ��1���ַ���û����\n�ַ���������
		�Ե�2���ַ���������1���ַ���ĩβ�����*/
	printf("Here's another way to print a \
long string.\n");
	//����2���÷�б�ܣ�\����Enter����Return������������С���ʹ�ù��
	//	������һ�У������ַ����в���������з�����Ч��������һ�м��������
	//	���ǣ���һ�д������ͳ����嵥�еĴ���һ��������߿�ʼ�����������
	//	�У���������5���ո���ô��5���ո�ͻ��Ϊ�ַ�����һ���֡�
	printf("Here's the newest way to print a "
		"long string.\n");
	//����3��ANSI C������ַ������ӡ���������˫�������������ַ���֮
	//	���ÿհ׸�����C��������Ѷ���ַ���������һ���ַ�����ˣ�����3����ʽ�ǵ�Ч�ģ�
	printf("Hello, young lovers, wherever you are.");
	printf("Hello, young "     "lovers" ", wherever you are.");
	printf("Hello, young lovers"
		", wherever you are.");
	/* * * * * * * * * ���� * * * * * * * * *
		����ֵΪ��ӡ�����ַ�����
	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}