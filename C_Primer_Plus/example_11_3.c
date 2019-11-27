

#include <stdio.h>
#include <limits.h>

/*
9.本章定义的s_gets()函数，用指针表示法代替数组表示法便可减少一个
变量i。请改写该函数。
10.strlen()函数接受一个指向字符串的指针作为参数，并返回该字符串
的长度。请编写一个这样的函数。
11.本章定义的s_gets()函数，可以用strchr()函数代替其中的while循环来
查找换行符。请改写该函数。
12.设计一个函数，接受一个指向字符串的指针，返回指向该字符串第1
个空格字符的指针，或如果未找到空格字符，则返回空指针。

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
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}
char* s_gets(char* st, int n)
{
	char* ret_val;
	//int  i   = 0;
	ret_val   = fgets(st, n, stdin);
		if(ret_val){  // 即，ret_val != NULL
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