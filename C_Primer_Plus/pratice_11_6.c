#include <stdio.h>
#include <string.h>
/*
9.编写一个函数，把字符串中的内容用其反序字符串代替。在一个完整
的程序中测试该函数，使用一个循环给函数提供输入值。
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
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
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