#include <stdio.h>
#include <string.h>
/*
1.��Ʋ�����һ���������������л�ȡ��n���ַ��������հס��Ʊ�
�������з������ѽ��������һ����������ĵ�ַ��������Ϊһ��������
*/
#define SIZE 10
void store(char target[],char *psource);
int pratice_11_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_11_1 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char target[10];
	//char *psource ;
	fgets(target, 10, stdin);
	//store(target, psource);
	puts(target);
	printf("%d", strlen(target));
	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}
void store(char target[],char* psource) {
	strcpy(target, psource);
}
