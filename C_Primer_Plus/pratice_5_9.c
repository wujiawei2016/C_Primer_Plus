#include <stdio.h>
/*
9.编写一个程序，要求用户输入一个华氏温度。程序应读取double类型
的值作为温度值，并把该值作为参数传递给一个用户自定义的函数
311
Temperatures()。该函数计算摄氏温度和开氏温度，并以小数点后面两位数字
的精度显示3种温度。要使用不同的温标来表示这3个温度值。下面是华氏温
度转摄氏温度的公式：
摄氏温度 = 5.0 / 9.0 * (华氏温度 - 32.0)
开氏温标常用于科学研究，0表示绝对零，代表最低的温度。下面是摄
氏温度转开氏温度的公式：
开氏温度 = 摄氏温度 + 273.16
Temperatures()函数中用const创建温度转换中使用的变量。在main()函数
中使用一个循环让用户重复输入温度，当用户输入 q 或其他非数字时，循环
结束。scanf()函数返回读取数据的数量，所以如果读取数字则返回1，如果
读取q则不返回1。可以使用==运算符将scanf()的返回值和1作比较，测试两
值是否相等。
*/
void Temperatures(double fnum);
int pratice_5_9_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_5_9 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");

	double num=0;
	printf("* * * * * * * * * * * * * * * *\n");

	
	while (scanf("%lf", &num)==1) {
		Temperatures(num);
		printf("* * * * * * * * * * * * * * * *\n");
		/*int i=scanf("%lf", &num);
		printf("scanf :%d\n",i);*/
	}

	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}
void Temperatures(double fnum) {
	printf("wendu1:%.2f wendu2:%.2f wendu3:%.2f\n", fnum,5.0/9.0*(fnum-32.0), 5.0 / 9.0*(fnum - 32.0)+273.16);

}