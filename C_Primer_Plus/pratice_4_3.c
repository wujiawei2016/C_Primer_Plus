#include <stdio.h>
#include <string.h>
#include <float.h>
/*
7.编写一个程序，将一个double类型的变量设置为1.0/3.0，一个float类
型的变量设置为1.0/3.0。分别显示两次计算的结果各3次：一次显示小数点
后面6位数字；一次显示小数点后面12位数字；一次显示小数点后面16位数
字。程序中要包含float.h头文件，并显示FLT_DIG和DBL_DIG的值。1.0/3.0
的值与这些值一致吗？

8.编写一个程序，提示用户输入旅行的里程和消耗的汽油量。然后计算
并显示消耗每加仑汽油行驶的英里数，显示小数点后面一位数字。接下来，
使用1加仑大约3.785升，1英里大约为1.609千米，把单位是英里/加仑的值转
换为升/100公里（欧洲通用的燃料消耗表示法），并显示结果，显示小数点
后面 1 位数字。注意，美国采用的方案测量消耗单位燃料的行程（值越大越
好），而欧洲则采用单位距离消耗的燃料测量方案（值越低越好）。使用
#define 创建符号常量或使用 const 限定符创建变量来表示两个转换系数。
*/


int pratice_4_3_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_4_3	 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	//练习7
	/*double num1 = 1.0 / 3.0;
	float num2 = 1.0 / 3.0;
	printf("FLT_DIG:%d---DBL_DIG:%d\n",FLT_DIG,DBL_DIG);
	printf("%.6f-%.12f-%.16f\n", num1, num1, num1);
	printf("%.6f-%.12f-%.16f\n", num2, num2, num2);*/

	//练习8
	float mile;
	float oil;
	const float jialun = 3.785;
	const float kilometer = 1.609;

	printf("plz enter 里程 & 消耗的汽油\n");
	scanf("%f", &mile);
	scanf("%f",&oil);
	printf("%f英里/加仑汽油\n", mile/oil);
	printf("%.1f升/100公里\n", oil * jialun /mile* kilometer*100);
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}