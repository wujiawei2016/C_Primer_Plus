#include <stdio.h>
#include <string.h>
#define SZIE 3
/*
11.��дһ������������10���ַ������߶���EOFʱֹͣ���ó���Ϊ��
���ṩһ����5��ѡ��Ĳ˵�����ӡԴ�ַ����б���ASCII�е�˳���ӡ��
�����������ȵ���˳���ӡ�ַ��������ַ����е�1�����ʵĳ��ȴ�ӡ�ַ�
�����˳����˵�����ѭ����ʾ�������û�ѡ���˳�ѡ���Ȼ���ó���Ҫ��
������ɲ˵��и�ѡ��Ĺ��ܡ�
*/
char* getStringArrays();
void select(char* arr);
char* sortByAscii(char(*arr)[10]);
char* sortByLenAdd(char(*arr)[10]);
char* sortByAlphabetical(char(*arr)[10]);
void printCharArray(char (* arr)[10]);
void exit();

int pratice_11_8_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_11_8 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");

	printf("plz enter 10 strings or CTRL+Z end\n");

	select(getStringArrays());

	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}
char* getStringArrays() {
	char arr[SZIE][1024] ;
	for (int i = 0; i < SZIE; i++) {
		int s=scanf("%1024s", arr[i]);
	}
		//fgets(arr[i], 1024, stdin);
	return arr;
}
void select(char *arr) {
	//int i = 0;
	printf(" enter 0 prinf by default\n");
	printf(" enter 1 prinf by ascii\n");
	printf(" enter 2 prinf by letters\n");
	printf(" enter 3 prinf by len add\n");
	printf(" enter 4 exit\n");
	printf("* * * * * * * * * * * * * * * *\n");
	printf("plz enter 0-4 for select\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char ch = getchar();
	printf("S---%c\n", ch);
	while ( ch != '0' && ch != '1' && ch != '2' && ch != '3' && ch != '4') {
		if (ch != '\n' ) {
		printf("plz enter 0-4\n");
		}
		ch = getchar();
	}
	
	switch (ch)
	{
	case '0':
		printf("0000000\n");
		break;
	case '1':
		printf("1111111\n");
		break;
	case '2':
		printf("222222\n");
		break;
	case '3':
		printf("333333\n");
		break;
	case '4':
		printf("444444\n");
		break;
	default:
		break;
	}
}
char* sortByAscii(char(*arr)[10]) {}
char* sortByLenAdd(char(*arr)[10]){}
char* sortByAlphabetical(char(*arr)[10]){}
void printCharArray(char(*arr)[10]){}
void exit(){}
