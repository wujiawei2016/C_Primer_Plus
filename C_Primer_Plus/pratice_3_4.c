#include <stdio.h>
// 浮点数的各种输出打印格式
int pratice_3_4_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice3_4 % c\n", 7);
	printf("* * * * * * * * * * * * * * * *\n");

	float fnum ;
	printf("plz enter a float num:\n");
	scanf("%f", &fnum);

	printf(" %f\n", fnum);
	printf(" %e\n", fnum);
	printf(" %a\n", fnum);
	printf(" %lF\n", fnum);
	printf(" %le\n", fnum);
	return 0;
}