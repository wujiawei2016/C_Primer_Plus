#include <stdio.h>
#include <string.h>
/*
	7.strncpy(s1, s2, n)函数把s2中的n个字符拷贝至s1中，截断s2，或者有必
要的话在末尾添加空字符。如果s2的长度是n或多于n，目标字符串不能以空
字符结尾。该函数返回s1。自己编写一个这样的函数，名为mystrncpy()。在
一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
*/
char* mystrncpy(char *target,char *source,int num);
int pratice_11_4_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_11_4 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char str1[13] = "Hello ";
	char* str3 = "Hello ";//不能使用这种方式 
	char* str2 = "World!";
	mystrncpy(str1, str2, 7);//num超过上限会导致str1变长
	puts(str1);
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
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