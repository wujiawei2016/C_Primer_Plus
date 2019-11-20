#include <stdio.h>
/*
1.设计一个函数min(x, y)，返回两个double类型值的较小值。在一个简单
的驱动程序中测试该函数。
2.设计一个函数chline(ch, i, j)，打印指定的字符j行i列。在一个简单的驱
动程序中测试该函数。
*/
double min(double, double);
void chline(char,int,int);
int pratice_9_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_9_1 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");

	chline('A', 3, 5);
	
	double num1=0;
	double num2=0;

	printf("plz enter first num\n");
	scanf("%lf", &num1);
	printf("plz enter second num\n");
	scanf("%lf", &num2);

	printf("the min num is %lf\n", min(num1, num2));
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}
double min(double a, double b) {
	double min = a;
	if (a > b) {
		min = b;
	}
	return min;
}
void chline(char c, int i, int j) {

	for (int row = 0; row < i; row++) {
		for (int columns = 0; columns < j; columns++) {
			putchar(c);
		}
		printf("\n");
	}

}