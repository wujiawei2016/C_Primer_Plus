#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <float.h>
/*
	例题:4.5 
	
	C头文件limits.h和float.h分别提供了与整数类型和浮点类型大小限制相关的详细信息。
	如int类型的最大值INT_MAX,最小值INT_MIN
	float.h头文件中也定义一些明示常量，如FLT_DIG和DBL_DIG，分别表示float类型和double类型的有效数字位数。
*/
#define DENSITY 62.4
int example_4_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_4_2 \7\n");
	printf("* * * * * * * * * * * * * * * *\n");
	
	printf("Some number limits for this system:\n");
	printf("Biggest int: %d\n", INT_MAX);
	printf("Smallest long long: %lld\n", LLONG_MIN);
	printf("One byte = %d bits on this system.\n", CHAR_BIT);
	printf("Largest double: %e\n", DBL_MAX);
	printf("Smallest normal float: %e\n", FLT_MIN);
	printf("float precision = %d digits\n", FLT_DIG);
	printf("float epsilon = %e\n", FLT_EPSILON);

	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}