#include <stdio.h>
/*
2.编写一个程序读取输入，读到#字符停止。程序要打印每个输入的字
符以及对应的ASCII码（十进制）。一行打印8个字符。建议:使用字符计数
和求模运算符（%）在每8个循环周期时打印一个换行符。
*/
int pratice_7_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_7_2 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char ch;
	int spaceCount = 0;
	int nCount = 0;
	int count = 0;
	while ((ch = getchar()) != '#') {
		count++;
		printf("%d_%d\t",count, ch);
		if (count%8==0) {
			printf(" \n");
		}


	}
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}