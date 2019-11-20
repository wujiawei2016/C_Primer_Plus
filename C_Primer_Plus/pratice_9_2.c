#include <stdio.h>
/*
6.编写并测试一个函数，该函数以3个double变量的地址作为参数，把最
小值放入第1个函数，中间值放入第2个变量，最大值放入第3个变量。
*/
void compare(double*, double*, double*);
int pratice_9_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_9_2 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	double num1 = 1.0;
	double num2 = 2.0;
	double num3 = 3.0;
	compare(&num1, &num2, &num3);
	printf("max=%lf mid=%lf min=%lf \n", num1, num2, num3);
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}
void compare(double* p1, double* p2, double* p3) {

	double max=*p1;
	if (max < *p2) {
		max = *p2;
	}
	if (max < *p3) {
		max = *p3;
	}
	double min=*p2;
	if (min >*p1) {
		min = *p1;
	}
	if (min > *p3) {
		min = *p3;
	}
	double mid=*p3;
	if (*p1 >min&&* p1<max) {
		mid = *p1;
	}if (*p2 > min&&* p2 < max) {
		mid = *p1;
	}
	*p1 = max;
	*p2 = mid;
	*p3 = min;
	printf("*p1-%lf   *p2-%lf  *p3-%lf\n", *p1, *p2, *p3);


}

