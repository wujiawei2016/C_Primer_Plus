#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
3.设计并测试一个函数，从一行输入中把一个单词读入一个数组中，并
丢弃输入行中的其余字符。该函数应该跳过第1个非空白字符前面的所有空
白。将一个单词定义为没有空白、制表符或换行符的字符序列。
4.设计并测试一个函数，它类似编程练习3的描述，只不过它接受第2个
参数指明可读取的最大字符数。
*/
#define SIZE 1024
char* getawords(char* target, int size);
int pratice_11_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_11_2 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char target[SIZE];
	getawords(target,SIZE);
	puts(target);
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}
char* getawords(char *target,int size) {
	char temp[SIZE];
	char* startpoint=temp ;
	char* temppoint= target;
	
	//puts(temp);
	//getnospacebeginword
	while (fgets(startpoint, SIZE, stdin)&&(*temp=='\n')) {
		printf("请输入正确的字符串:\n");
	}
	/*if (*temp == '\n') {
		printf("请输入正确的字符串:\n");
		return;
	}*/

	while ( isspace(*startpoint)) {
		//printf("#%c-%p#\n", *startpoint, startpoint);
		startpoint++;
	}
	if (*startpoint != '\0') {
		while (!isspace(*startpoint)) {
			*temppoint++ = *startpoint;
			startpoint++;
		}
		
	}
	else {
		printf("字符串为空\n");
	}
	*temppoint = '\0';
	return target;
}

