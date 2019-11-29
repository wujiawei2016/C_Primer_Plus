#include <stdio.h>
#include <string.h>
/*
10.编写一个函数接受一个字符串作为参数，并删除字符串中的空格。
在一个程序中测试该函数，使用循环读取输入行，直到用户输入一行空行。
该程序应该应用该函数只每个输入的字符串，并显示处理后的字符串。
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
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}
/**
只接受一行的输入或者1024的字符
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