#include <stdio.h>
#include <string.h>
/*
	7.strncpy(s1, s2, n)������s2�е�n���ַ�������s1�У��ض�s2�������б�
Ҫ�Ļ���ĩβ��ӿ��ַ������s2�ĳ�����n�����n��Ŀ���ַ��������Կ�
�ַ���β���ú�������s1���Լ���дһ�������ĺ�������Ϊmystrncpy()����
һ�������ĳ����в��Ըú�����ʹ��һ��ѭ���������ṩ����ֵ��
*/
char* mystrncpy(char *target,char *source,int num);
int pratice_11_4_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_11_4 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char str1[13] = "Hello ";
	char* str3 = "Hello ";//����ʹ�����ַ�ʽ 
	char* str2 = "World!";
	mystrncpy(str1, str2, 7);//num�������޻ᵼ��str1�䳤
	puts(str1);
	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}
char* mystrncpy(char* target, char* source, int num) {
	char* targettemp = target;
	char* sourcetemp = source;

	while (*sourcetemp!='\0') {
		sourcetemp++;
	}
	if(sourcetemp- source<=num){
		sourcetemp = source;
		while (*targettemp != '\0') {
			targettemp++;
		}
		for (; num > 0; num--) {
			*targettemp++ = *sourcetemp++;
		}
		*targettemp = '\0';
	}
	
	return target;
}