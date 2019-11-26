#include <stdio.h>
#include <string.h>
/*
1.设计并测试一个函数，从输入中获取下n个字符（包括空白、制表
符、换行符），把结果储存在一个数组里，它的地址被传递作为一个参数。
*/
#define SIZE 10
void store(char target[],char *psource);
int pratice_11_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_11_1 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char target[10];
	//char *psource ;
	fgets(target, 10, stdin);
	//store(target, psource);
	puts(target);
	printf("%d", strlen(target));
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}
void store(char target[],char* psource) {
	strcpy(target, psource);
}
