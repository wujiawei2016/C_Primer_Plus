#include <stdio.h>
#include <ctype.h>
#define SPACE ' '����
/*
	getchar()���� :��ȡ��������ĵ����ַ� char 
	��putchar()���� ����ַ�

	������: Ϊ����ѭ���ڵ���䲻��ִ��,���Ǳ������ѭ����ִ��
	�ٶȽ��;printf ������������ݵ������� ���ǵ���ʾ�� ���Ҫ�ȵ�ѭ��������Ż�һ�����������Ļ��
	putchar ͬ��

*/
int example_7_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_7_1 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char ch;
	ch = getchar(); 
	while (ch != '\n'){
		if (ch == ' '){
			putchar(ch); 
		}else {
			putchar(ch + 1);
		}
		ch = getchar();
	}
	switch (getchar())
	{
	default:
		break;
	}

	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}