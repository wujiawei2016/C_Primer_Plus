#include <stdio.h>
#include <string.h>
/*
1.��Ʋ�����һ���������������л�ȡ��n���ַ��������հס��Ʊ�
�������з������ѽ��������һ����������ĵ�ַ��������Ϊһ��������
2.�޸Ĳ������ϰ1�ĺ�������n���ַ���ֹͣ�����ڶ�����1���հס�
�Ʊ�����з�ʱֹͣ���ĸ��������ĸ�ֹͣ������ֻʹ��scanf()��
*/
#define SIZE 1024
char* getstr(char* str, int size);
int pratice_11_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_11_1 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char target[SIZE];
	//char *psource ;
	char* str;
	str = getstr(target,SIZE);
	//store(target, psource);
	puts(str);
	printf("%zd", strlen(str));
	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}
char* getstr(char *str,int size) {
	char ch;
	char* temp = str;
	char* max = str + size;
	while ((ch=getchar())!=EOF&& str<=max&& ch!='\n'&&ch!='\t'&&ch!=' ') {
		//putchar(ch);
			*str= ch;
			/*if (ch=='\n') {
				*str = 'q';
			}
			if (ch == ' ') {
				*str = 'p';
			}
			if (ch == '\t') {
				*str = 'o';
			}*/
			*str++;
	}

	*str = '\0';
	//printf("temp-%p  str-%p",temp,str);
	//fgets(str, SIZE, stdin);//fgets�����޷���û��з�
	//scanf("%10s", str);//��һ���ǿո��ַ�����һ���ո�(����/�Ʊ��)Ϊֹ Ϊһ���ַ��� Ҳ�޷���ȡ�Ʊ���ͻ����з�
	//gets(str);//�޷���ȡ���з�
	return temp;
}
