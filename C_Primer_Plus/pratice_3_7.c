#include <stdio.h>
// 根据需求判断用什么数据类型
int pratice_3_7_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice_3_7 % c\n", 7);
	printf("* * * * * * * * * * * * * * * *\n");
	const float perinch = 2.54;
	float num;
	printf("plz enter your hight about inch :\n");
	scanf("%f", &num);

	printf(" %f cm\n", num*perinch);
	printf(" %e\n", num * perinch);

	return 0;
}