
#include <stdio.h>
#include <string.h>
/*
	����ʼ������Ѿ�̬�洢�����ַ��������������У�����ʼ��ָ��
ֻ���ַ����ĵ�ַ������ָ�롣�����嵥11.3��ʾ����һ��
*/

#define MSG  "I'm  special"
int example_11_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_11_1 \7\n");
	printf("* * * * * * * * * * * * * * * *\n");

	char  ar[] = MSG;
	const char* pt = MSG;
	printf("address  of  \"I'm  special\":  %p  \n", "I'm  special");
	printf("                  address  ar:  %p\n", ar);
	printf("                  address  pt:  %p\n", pt);
	printf("             address  of  MSG:  %p\n", MSG);
	printf("address  of  \"I'm  special\":  %p  \n", "I'm  special");
	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}