#include <stdio.h>
#define SPACE ' '　　
/*
	getchar()方法 :获取键盘输入的单个字符 char 
	和putchar()方法 输出字符

	有疑问: 为何在循环内的语句不先执行,而是必须结束循环才执行
	百度解答;printf 函数是输出内容到缓冲区 不是到显示屏 因此要等到循环结束完才会一次性输出到屏幕上
	putchar 同理
*/
int example_7_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_7_1 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char ch;
	ch = getchar(); 
	while (ch != '\n'){
		if (ch == ' '){
			putchar(ch); 
			printf("%c", ch);
		}else {
			putchar(ch + 1);
			printf("\n%c", ch+1);
		}
		ch = getchar();
	}
	//putchar(ch);

	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}