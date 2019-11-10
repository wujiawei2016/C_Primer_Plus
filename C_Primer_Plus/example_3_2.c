#include <stdio.h>
/*
	例题:小心遗漏参数 第三章的例题没多少值得敲的 看懂就行
*/
int example_3_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_3_2 % c\n", 7);
	printf("* * * * * * * * * * * * * * * *\n");

	int ten = 10;
	int two  = 2;
	printf("Doing　it　right:　");
	printf("%d　minus　%d　is　%d\n", ten, 2, ten - two);
	printf("Doing　it　wrong:　");
	printf("%d minus %d is %d\n", ten);
	

	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}