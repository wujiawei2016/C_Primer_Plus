
#include <stdio.h>
#include <string.h>
/*
	，初始化数组把静态存储区的字符串拷贝到数组中，而初始化指针
只把字符串的地址拷贝给指针。程序清单11.3演示了这一点
*/

#define MSG  "I'm  special"
int example_11_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_11_1 \7\n");
	printf("* * * * * * * * * * * * * * * *\n");

	char  ar[] = MSG;
	const char* pt = MSG;
	printf("address  of  \"I'm  special\":  %p  \n", "I'm  special");
	printf("                  address  ar:  %p\n", ar);
	printf("                  address  pt:  %p\n", pt);
	printf("             address  of  MSG:  %p\n", MSG);
	printf("address  of  \"I'm  special\":  %p  \n", "I'm  special");
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}