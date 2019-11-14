#include <stdio.h>
/*
1.编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时
间。使用#define或const创建一个表示60的符号常量或const变量。通过while
循环让用户重复输入值，直到用户输入小于或等于0的值才停止循环。
*/
#define MINUTE 60
int pratice_5_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_5_2 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	int minute;
	printf("Plz enter the MINUTEs:");
	scanf("%d",&minute);
	
	printf("The time is %d H  %d MINUTE", minute / MINUTE, minute % MINUTE);

	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}