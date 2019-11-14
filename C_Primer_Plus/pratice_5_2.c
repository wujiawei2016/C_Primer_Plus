#include <stdio.h>
/*
2.编写一个程序，提示用户输入一个整数，然后打印从该数到比该数大
10的所有整数（例如，用户输入5，则打印5～15的所有整数，包括5和
15）。要求打印的各值之间用一个空格、制表符或换行符分开。
*/
#define MINUTE 60
int pratice_5_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_5_2 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	int num;
	printf("Plz enter a num:");
	scanf("%d", &num);
	int i = 0;
	while (i<=10) {
		printf("%d\n",num+i);
		i++;
	}
	

	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}