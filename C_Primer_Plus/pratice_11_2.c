#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
3.��Ʋ�����һ����������һ�������а�һ�����ʶ���һ�������У���
�����������е������ַ����ú���Ӧ��������1���ǿհ��ַ�ǰ������п�
�ס���һ�����ʶ���Ϊû�пհס��Ʊ�����з����ַ����С�
4.��Ʋ�����һ�������������Ʊ����ϰ3��������ֻ���������ܵ�2��
����ָ���ɶ�ȡ������ַ�����
*/
#define SIZE 1024
char* getawords(char* target, int size);
int pratice_11_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_11_2 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char target[SIZE];
	getawords(target,SIZE);
	puts(target);
	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}
char* getawords(char *target,int size) {
	char temp[SIZE];
	char* startpoint=temp ;
	char* temppoint= target;
	
	//puts(temp);
	//getnospacebeginword
	while (fgets(startpoint, SIZE, stdin)&&(*temp=='\n')) {
		printf("��������ȷ���ַ���:\n");
	}
	/*if (*temp == '\n') {
		printf("��������ȷ���ַ���:\n");
		return;
	}*/

	while ( isspace(*startpoint)) {
		//printf("#%c-%p#\n", *startpoint, startpoint);
		startpoint++;
	}
	if (*startpoint != '\0') {
		while (!isspace(*startpoint)) {
			*temppoint++ = *startpoint;
			startpoint++;
		}
		
	}
	else {
		printf("�ַ���Ϊ��\n");
	}
	*temppoint = '\0';
	return target;
}

