#include <stdio.h>
#include <string.h>
/*
10.��дһ����������һ���ַ�����Ϊ��������ɾ���ַ����еĿո�
��һ�������в��Ըú�����ʹ��ѭ����ȡ�����У�ֱ���û�����һ�п��С�
�ó���Ӧ��Ӧ�øú���ֻÿ��������ַ���������ʾ�������ַ�����
*/
char* deletespace(char *str);
int pratice_11_7_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_11_7 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char* str = " as sd as da ";
	
	printf("%s", deletespace(str));
	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}
/**
ֻ����һ�е��������1024���ַ�
*/
char* deletespace(char* str) {
	char tempstr[1024];
	char* temppoint = tempstr;
	char *temp = str;
	while (*temp != '\0'){
		if (*temp != ' ') {
			*temppoint++ = *temp++;
		}
		else {
			temp++;
		}
	}
	if (*temp == '\0') {
		*(temppoint ) = '\0';
	}
	//*temppoint = '\0';
	return tempstr;
}