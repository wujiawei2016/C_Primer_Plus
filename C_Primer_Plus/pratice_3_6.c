#include <stdio.h>
// 根据需求判断用什么数据类型,上一题为较大值 这题为较小值
//一个水分子重量为3*10的-23次方浮点型double 1夸脱水是850克 int型 
int pratice_3_6_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice_3_5 % c\n", 7);
	printf("* * * * * * * * * * * * * * * *\n");
	const float perm = 3e-23;
	const int kt = 850;
	int num;
	printf("plz enter what m of water :\n");
	scanf("%d", &num);

	printf(" %f\n",  ( num*kt)/perm);
	printf(" %e\n", (num * kt )/ perm);

	return 0;
}