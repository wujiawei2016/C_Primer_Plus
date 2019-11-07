#include <stdio.h>
//观察各个数据类型溢出情况
int pratice3_2main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice3_2\n");
	printf("* * * * * * * * * * * * * * * *\n");
	//int 类型 short类型 即short int 长2个字节 即16个二进制位
	//byte inum = 0; C语言无byte 类型
	//short num = 0; 等价于short int num = 0; 
	short num = 0;
	
	printf("sizeof short %zd - 实际输出值:%d\n", sizeof(short), num);
	return 0;
}