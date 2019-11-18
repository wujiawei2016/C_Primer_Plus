#include <stdio.h>
#include <string.h>
/*
	重定向,改变程序的输入或者输出
	例如从键盘输入改成从文件输入,输出到屏幕改成输出到文件
*/
int example_8_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_8_2 \7\n");
	printf("* * * * * * * * * * * * * * * *\n");
	int ch;
	FILE* fp;
	char fname[50];// 储存文件名
	printf("Enter　the　name　of　the　file:　");
	scanf("%s", fname);
	fp = fopen(fname, "r");// 打开待读取文件
	if (fp == NULL)// 如果失败
	{
		printf("Failed　to　open　file.　Bye\n");
		exit(1);// 退出程序
	}
	// getc(fp)从打开的文件中获取一个字符
	while((ch  = getc(fp)) != EOF)
		putchar(ch);
	fclose(fp);// 关闭文件

	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}