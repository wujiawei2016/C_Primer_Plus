#include <stdio.h>
#include <string.h>
/*
	把缓冲区当文件处理,EOF返回值 end of file  即文件结束的意思 EOF = -1
	在新的一行开始输入Ctrl+Z相当于输入文件结束符 EOF ,Linux 系统输入Ctrl+D 
*/
int example_8_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_8_1 \7\n");
	printf("* * * * * * * * * * * * * * * *\n");
	int ch;
	while ((ch=getchar())!=EOF)
	{
		putchar(ch);
	}

	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}