#include <stdio.h>
#include <string.h>
/*
9.��дһ�����������ַ����е��������䷴���ַ������档��һ������
�ĳ����в��Ըú�����ʹ��һ��ѭ���������ṩ����ֵ��
*/
char* getreverse(char str[]);
int pratice_11_6_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_11_6 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	//char* str = "Hello World!";
	char* str = "abcdefghijklmnopqrstuvwxyz";
	str=getreverse(str);
	printf("%s", str);
	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}

char* getreverse(char *str) {
	char tempstr[1024];
	int len = strlen(str);
	char *temp=str+ len-1;
	char *point= tempstr;
	printf("tempstr %p ", tempstr);
	while (temp >= str) {
		*point++ = *temp--;
	}
	//if (temp < str) {
		*point = '\0';
	//}
	str = tempstr;
	printf("tempstr %p - %s\n", tempstr, tempstr);
	return str;
}