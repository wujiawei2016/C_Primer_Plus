#include <stdio.h>
// 根据需求判断用什么数据类型
// 1P=2B 1B=8Y 1Y=2D 1D=3C 需要进行单位换算 会有除法,必须浮点型 否则丢失精度
int pratice_3_8_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice_3_8 % c\n", 7);
	printf("* * * * * * * * * * * * * * * *\n");
	float num;
	printf("plz enter how cup :\n");
	scanf("%f", &num);

	printf("p %f \n", num /2);
	printf("b %f \n", num *1 );
	printf("y %f \n", num *8 );
	printf("d %f \n", num * 8*2);
	printf("c %f \n", num * 8*2*3);
	


	return 0;
}