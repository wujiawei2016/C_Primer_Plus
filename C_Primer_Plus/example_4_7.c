#include <stdio.h>
/*
	例题:

	对printf函数来说 * 修饰符 功能等于数字修饰符, 等于定义打印的宽度, 
	好比定义了一个变量,这个变量需要赋值,这个值就是用来定义打印的宽度
	也相当于一个占位符,所以在后面需要给一个对应的数值
	//用来动态的定义打印宽度
	//而在scanf()函数中,* 修饰符则会跳该数值的输入
*/
int example_4_7_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is example_4_7 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");

	/*unsigned width, precision;
	int number = 256;
	double weight = 242.5;
	printf("Enter a field width:\n");
	scanf("%d", &width);
	printf("The number is :%*d:\n", width, number);
	printf("Now enter a width and a precision:\n");
	scanf("%d %d", &width, &precision);
	printf("Weight = %*.*f\n", width, precision, weight);
	printf("Done!\n");*/
	printf("* * * * * * * * * * * * * * * *\n");
	int n;
	printf("Please enter three integers:\n");
	scanf("%*d %*d %d", &n);
	printf("The last integer was %d\n", n);
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}