#include <stdio.h>
#include <string.h>
/*
	�ѻ��������ļ�����,EOF����ֵ end of file  ���ļ���������˼ EOF = -1
	���µ�һ�п�ʼ����Ctrl+Z�൱�������ļ������� EOF ,Linux ϵͳ����Ctrl+D 
*/
int example_8_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_8_1 \7\n");
	printf("* * * * * * * * * * * * * * * *\n");
	int ch;
	while ((ch=getchar())!=EOF)
	{
		putchar(ch);
	}

	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}