#include <stdio.h>
//观察各个数据类型溢出情况:float类型 double类型 
int pratice_3_1_4_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice_3_1_4main\n");
	printf("* * * * * * * * * * * * * * * *\n");

	//float类型: 4个字节 32个二进制位
	//float 其中第一位为符号位 内存中

	float num1 = -9.876543e7;// 输出结果:2147483646
	printf("sizeof float %zd - 实际输出值:%f\n", sizeof(float), num1);
	printf("* * * * * * * * * * * * * * * *\n");
	

	//double类型: 4个字节 32个二进制位

	double num2=10000000000000000000;// 输出结果:2147483646
	printf("sizeof float %zd - 实际输出值:%f\n", sizeof(float), num2);
	printf("* * * * * * * * * * * * * * * *\n");

	/* * * * * * * * * 结论 * * * * * * * * *
	目前观察到的现象是在10的7次方内 且有效数字不超过7个 能保持精度
	在这里double和float都是四个字节,但是明显double能正常输出的范围更大
	未完待续-------
	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}