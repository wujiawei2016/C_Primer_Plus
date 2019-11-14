#include <stdio.h>
/*
3.编写一个程序，提示用户输入天数，然后将其转换成周数和天数。例
如，用户输入18，则转换成2周4天。以下面的格式显示结果：
18 days are 2 weeks, 4 days.
通过while循环让用户重复输入天数，当用户输入一个非正值时（如0
或-20），循环结束。
*/
#define MINUTE 60
int pratice_5_3_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_5_3 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	int num=0;
	printf("Plz enter days:");
	
	int i = 0;
	while (num >=0) {
		scanf("%d", &num);
		printf("%d weeks & %d days \n", num /7,num%7);
		
	}


	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}