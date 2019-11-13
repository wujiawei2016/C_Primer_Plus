﻿#include <stdio.h>
//观察各个数据类型溢出情况:int 类型 
//这里理解有误,上溢 （overflow）下溢 （underflow）指浮点型,超出浮点型最大值时叫做上溢（overflow）,
//失去精度的值叫（subnormal）
//在浮点型做除法时比如(0.1234E-10）除以10，得到的结果是0.0123E-10 叫下溢（overflow）
//这里的上溢下溢应该是超出最大值范围和最小值范围
int pratice3_1_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice3_1\n");
	printf("* * * * * * * * * * * * * * * *\n");
	//int 类型  长4个字节 即 32的二进制位
	//int intnum = 4294967295;//2的32次方
	//int intnum = 2147483647;//2的31次方 为int极大值
	//int intnum = 2147483648;//2的31次方 输出结果:-2147483648 
	int intnum = 2147483649;//2的31次方 输出结果:-2147483647 
	//int intnum = -2147483648;//2的31次方 无法通过编译
	//int intnum = 0-2147483648;//2的31次方 这种方法可通过编译 输出结果:-2147483648
	//int intnum = 0-2147483649;//2的31次方 这种方法可通过编译 输出结果:2147483647
	//int intnum = 0-2147483650;//2的31次方 这种方法可通过编译 输出结果:2147483646 
	//*********结论*********//
	//上溢出 则变为负数极小值 每下溢一则输出的值也加1
	//下溢出 则变为正数最大值 每下溢一则输出的值也减1
	//当表示正数时，最高位为符号位（符号位为0），
	//	最大的正数是 0111 1111 1111 1111 1111 1111 1111 1111 
	//	即2 ^ 31 - 1 = 2147483647
	//	当表示负数时，最高位为符号位（符号位为1），
	//	最小的负数是 1000 0000 0000 0000 0000 0000 0000 0000 
	//	而在计算机中是以补码的形式存储的，C语言规定 
	//	1000 0000 0000 0000 0000 0000 0000 0000 的补码为 - 2147483648
	//*********结论*********//
	printf("sizeof int %zd - 实际输出值:%d\n", sizeof(int),intnum);
	return 0;
}