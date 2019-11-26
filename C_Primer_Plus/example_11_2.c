

#include <stdio.h>
#include <string.h>
#include <limits.h>
/*
	//scanf(),gets()、fgets()和 gets_s()的区别
	：puts()、fputs()和printf()。
	注意，gets()丢弃输入中的换行符，但是puts()在输出中添加换行符。另
    一方面，fgets()保留输入中的换行符，fputs()不在输出中添加换行符。
*/

int example_11_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_11_2 \7\n");
	printf("* * * * * * * * * * * * * * * *\n");
	
	char str[10];
	char str1[1024] = "this is str 1111111111111111111111";
	char str2[1024] = "this is str 2222222222222222222222";
	char str3[1024] = "this is str 3333333333333333333333";
	//gets(str);//输入超过赋予的空间大小时会导致字符串没有停止符'\0'
	//gets_s(str, 10);
	int fgets_back_value=fgets(str, 10, stdin);//返回值为str的地址
	int fputs_back_value=fputs(str, stdout);//返回值为0

	//puts(str);//后面会换行符
	//puts(str1);
	printf("%p %p %d", fgets_back_value, str, fputs_back_value);



	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}