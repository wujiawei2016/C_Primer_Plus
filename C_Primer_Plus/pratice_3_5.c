#include <stdio.h>
// 根据需求判断用什么数据类型
//一年的秒数为3.156*10的7次方 明显需要使用浮点型 年前为int类型
int pratice_3_5_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice_3_5 % c\n", 7);
	printf("* * * * * * * * * * * * * * * *\n");
	const float yearseconds = 3.156e7;
	int num;
	printf("plz enter your age :\n");
	scanf("%d", &num);

	printf(" %f\n", yearseconds*num);
	printf(" %e\n", yearseconds*num);
	
	return 0;
}