#include <stdio.h>
/*
7.编写一个程序，提示用户输入一个double类型的数，并打印该数的立
方值。自己设计一个函数计算并打印立方值。main()函数要把用户输入的值
传递给该函数。
*/
double lifang(double num);
int pratice_5_7_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_5_7 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	
	double dnum;
	printf("plz enter a double num:");
	scanf("%lf", &dnum);
	printf("m³:%lf", lifang(dnum));
	
	/* * * * * * * * * 结论 * * * * * * * * *
		
	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}

double lifang(double num) {
	return num * num * num;
}