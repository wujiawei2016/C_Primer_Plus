#include <stdio.h>
#include <string.h>
/*
1.设计并测试一个函数，从输入中获取下n个字符（包括空白、制表
符、换行符），把结果储存在一个数组里，它的地址被传递作为一个参数。
2.修改并编程练习1的函数，在n个字符后停止，或在读到第1个空白、
制表符或换行符时停止，哪个先遇到哪个停止。不能只使用scanf()。
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
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
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
	//fgets(str, SIZE, stdin);//fgets方法无法获得换行符
	//scanf("%10s", str);//第一个非空格字符到第一个空格(换行/制表符)为止 为一串字符串 也无法获取制表符和华换行符
	//gets(str);//无法获取换行符
	return temp;
}
