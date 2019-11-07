#include <stdio.h>
//观察各个数据类型溢出情况:short类型
int pratice3_1_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice3_2\n");
	printf("* * * * * * * * * * * * * * * *\n");
	//int 类型 范围 -32768~32767 short类型 即short int 长2个字节 即16个二进制位
	//byte inum = 0; C语言无byte 类型
	//short num = 0; 等价于short int num = 0; 
	short num = 32767;// 实际输出值:32767
	//short num = 32768;// 实际输出值:-32768
	//short num = -32768;// 实际输出值:-32768
	//short num = -32769;// 实际输出值:32768
	
	printf("sizeof short %zd - 实际输出值:%d\n", sizeof(short), num);

	//*********结论*********//
	//上溢出 则变为负数极小值 每下溢一则输出的值也加1
	//下溢出 则变为正数最大值 每下溢一则输出的值也减1
	//其原理与int类型一致
	//*********结论*********//
	return 0;
}