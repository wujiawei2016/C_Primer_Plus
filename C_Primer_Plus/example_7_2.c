#include <stdio.h>
#include <ctype.h>　
/*
	ctype.h头文件函数如下:
	1	int isalnum(int c)
	该函数检查所传的字符是否是字母和数字。
	2	int isalpha(int c)
	该函数检查所传的字符是否是字母。
	3	int iscntrl(int c)
	该函数检查所传的字符是否是控制字符。
	4	int isdigit(int c)
	该函数检查所传的字符是否是十进制数字。
	5	int isgraph(int c)
	该函数检查所传的字符是否有图形表示法。
	6	int islower(int c)
	该函数检查所传的字符是否是小写字母。
	7	int isprint(int c)
	该函数检查所传的字符是否是可打印的。
	8	int ispunct(int c)
	该函数检查所传的字符是否是标点符号字符。
	9	int isspace(int c)
	该函数检查所传的字符是否是空白字符。
	10	int isupper(int c)
	该函数检查所传的字符是否是大写字母。
	11	int isxdigit(int c)
	该函数检查所传的字符是否是十六进制数字。
	标准库还包含了两个转换函数，它们接受并返回一个 "int"

	序号	函数 & 描述
	1	int tolower(int c)
	该函数把大写字母转换为小写字母。
	2	int toupper(int c)
	该函数把小写字母转换为大写字母。
*/
int example_7_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_7_1 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char ch;
	ch = getchar();
	if (isdigit(ch)) {
		printf("is a  num");
	}
	else if (isalpha(ch)) {
		printf("is a letter ");
	}

	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}