

#include <stdio.h>
#include <limits.h>

/*
9.���¶����s_gets()��������ָ���ʾ�����������ʾ����ɼ���һ��
����i�����д�ú�����
10.strlen()��������һ��ָ���ַ�����ָ����Ϊ�����������ظ��ַ���
�ĳ��ȡ����дһ�������ĺ�����
11.���¶����s_gets()������������strchr()�����������е�whileѭ����
���һ��з������д�ú�����
12.���һ������������һ��ָ���ַ�����ָ�룬����ָ����ַ�����1
���ո��ַ���ָ�룬�����δ�ҵ��ո��ַ����򷵻ؿ�ָ�롣

*/
char* s_gets(char* st, int n);
int strllen(char* str);
char* getfirstspaceindex(char* str);
int example_11_3_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_11_3 \7\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char str[10];
	s_gets(str, 10);

	puts(str);
	printf("str len:%d\n", strlen(str));
	printf("str %p\n", str);
	printf("str space %p\n", getfirstspaceindex(str));
	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}
char* s_gets(char* st, int n)
{
	char* ret_val;
	//int  i   = 0;
	ret_val   = fgets(st, n, stdin);
		if(ret_val){  // ����ret_val != NULL
			while (*st!= '\n' && *st != '\0') {
				st++;
			}
			if (*st == '\n') {
				*st = '\0';
				puts("add \\0");
			}
			else {
				while (getchar() != '\n')
					continue;
			}
		/*	while  (st[i] != '\n' && st[i] != '\0')
				i++;
			if  (st[i] == '\n')
				st[i] = '\0';
		else
			while  (getchar() != '\n')
			continue;*/
		}
		printf("ret_val %p\n", ret_val);
	return  ret_val;
}
int strllen(char* str) {
	int len = 0;
	while (*str != '\0'
		//&& *str != '\n'
		) {
		str++;
		len++;
	}
	return len;
}

char* getfirstspaceindex(char* str) {
	//int index = 0;
	while (*str!='\0'&& *str!=' '){
		str++;
	}
	if (*str=='\0') {
		str = NULL;
	}
	return str;
}