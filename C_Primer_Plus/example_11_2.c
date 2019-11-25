

#include <stdio.h>
#include <string.h>
#include <limits.h>
/*
	//scanf(),gets()、fgets()和 gets_s()的区别
	：put()、fputs()和printf()。
	注意，gets()丢弃输入中的换行符，但是puts()在输出中添加换行符。另
    一方面，fgets()保留输入中的换行符，fputs()不在输出中添加换行符。
*/

int example_11_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_11_2 \7\n");
	printf("* * * * * * * * * * * * * * * *\n");
	int i = 0;
	while (i<=INT_MAX&&i>=0)
		printf("%d\n", i+=10000);
		printf(" i %d\n", i);

	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}