#include <stdio.h>
/*
	例题:4.15scanf()的类型 转换说明
*/
int example_4_6_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is example_4_6 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");

	int age; // 变量
	float assets; // 变量
	char pet[30]; // 字符数组，用于储存字符串
	printf("Enter your age, assets, and favorite pet.\n");
	scanf("%d %f", &age, &assets); // 这里要使用&
	scanf("%s", pet); // 字符数组不使用&
	printf("%d $%.2f %s\n", age, assets, pet);
	printf("* * * * * * * * * * * * * * * *\n");

	//%c 把输入解释成字符
	//%d 把输入解释成有符号的十进制数
	//%i 把输入解释成有符号的十进制数
	//%o 把输入解释成有符号的八进制数
	//%x X 把输入解释成有符号的十六进制数
	//%e f g a 把输入解释成浮点数
	//%E F G A 把输入解释成浮点数

	//%p 把输入解释成指针(地址)
	//%s 把输入解释成字符串 第一个非空白字符到下一个空白字符之前的都是输入
	//%u 把输入解释成有无符号的十进制数

	//转换说明的修饰符要严格遵守下面规则
	// 修饰符: * 含义:抑制复制 示例:%*d 见example_4_7.c
	// 修饰符: 数字 含义:最大字段宽度,输入达到最大宽度为止或者空白字符时停止 示例:%10s
	// 修饰符: hh 含义:把整数作为singed char 或者unsinged char类型读取 示例:%hhd %hhu
	// 修饰符: j 含义:把整数作为intmax_t 和uintmax_t类型的值读取 示例:
	// 修饰符: z 含义:把整数作为sizeof方法的返回值 size_t类型的值读取 示例:%zd %zo
	// 修饰符: t 含义:把整数作为两个指针差值的类型读取 示例:%td %tx


	// 修饰符: ll 含义:把整数作为long long或者unsigned long long类型读取 示例:%td %tx
	// 修饰符: h,l,L 含义:
	//1.%hd %hi把对应的值作为short int类型读取 
	//2.%ho %hx,%hu把对应的值作为unsigned short int类型读取 
	//3.%ld %li,%hu把对应的值作为long类型读取 
	//4.%lo %lx,%lu把对应的值作为unsigned long类型读取 
	//4.%le %lf,%lg把对应的值作为double类型读取 
	//4.%Le %Lf,%Lg把对应的值作为long double类型读取 




	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}