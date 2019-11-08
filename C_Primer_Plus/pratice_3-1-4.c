#include <stdio.h>
//观察各个数据类型溢出情况:float类型 double类型 
int pratice_3_1_4_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice_3_1_4main\n");
	printf("* * * * * * * * * * * * * * * *\n");

	//float类型: 4个字节 32个二进制位
	//float 其中第一位为符号位 内存中

	//float num1 = 0.1234567e7;// 输出结果:
	float num1 = 1e30;// 输出结果:
	printf("sizeof float %zd - 实际输出值:%f\n", sizeof(float), num1);
	printf("* * * * * * * * * * * * * * * *\n");
	

	//double类型: 8个字节 32个二进制位

	//double num2= 1.234567890123456e18;// 输出结果:
	double num2= 1e22+10000000000;// 输出结果:
	printf("sizeof double %zd - 实际输出值:%f\n", sizeof(double), num2);
	printf("* * * * * * * * * * * * * * * *\n");

	/* * * * * * * * * 结论 * * * * * * * * *
	float:目前观察到的现象是在10的7次方内 且有效数字不超过6个 能保持精度
	double:有效数字为十六个,10的18次方内能保持精度
	未完待续-------浮点型数据类型的原理以及其精度
	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}