#include <stdio.h>
#include <string.h>
/*
5.设计并测试一个函数，搜索第1个函数形参指定的字符串，在其中查
找第2个函数形参指定的字符首次出现的位置。如果成功，该函数返指向该
字符的指针，如果在字符串中未找到指定字符，则返回空指针（该函数的功
能与 strchr()函数相同）。在一个完整的程序中测试该函数，使用一个循环
给函数提供输入值。
6.编写一个名为is_within()的函数，接受一个字符和一个指向字符串的
指针作为两个函数形参。如果指定字符在字符串中，该函数返回一个非零值
（即为真）。否则，返回0（即为假）。在一个完整的程序中测试该函数，
使用一个循环给函数提供输入值。

这两题本质相同
*/
char* getindex(char *str,char ch);
int pratice_11_3_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_11_3 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char str[1024];
	/*while () {
	
	}*/
	printf("%p\n", getindex(str, 'g'));
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}
char* getindex(char* str, char ch) {
	printf("getindex-%p\n", str);
	char* temp = str;
	while ( *temp != '\0') {
		if (*temp == ch) {
			break;
		}
		else {
		temp++;
		}
	}
	if (temp>= str+strlen(str)) {
		temp = NULL;
	}
	return temp;
}