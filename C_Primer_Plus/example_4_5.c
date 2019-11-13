#include <stdio.h>
/*
	例题4.13,4.14:printf 返回值的问题 和字符 串换行问题 
*/
int example_4_5_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is example_4_5 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");

	//例题4.13
	//int bph2o = 212;
	int bph2o = 22;
	int rv;
	rv = printf("%d F is water's boiling point.\n", bph2o);
	printf("The printf() function printed %d characters.\n",rv);
	//例题4.13, 4.14:
	printf("Here's one way to print a ");
	printf("long string.\n");
	/*方法1：使用多个printf()语句。因为第1个字符串没有以\n字符结束，所
		以第2个字符串紧跟第1个字符串末尾输出。*/
	printf("Here's another way to print a \
long string.\n");
	//方法2：用反斜杠（\）和Enter（或Return）键组合来断行。这使得光标
	//	移至下一行，而且字符串中不会包含换行符。其效果是在下一行继续输出。
	//	但是，下一行代码必须和程序清单中的代码一样从最左边开始。如果缩进该
	//	行，比如缩进5个空格，那么这5个空格就会成为字符串的一部分。
	printf("Here's the newest way to print a "
		"long string.\n");
	//方法3：ANSI C引入的字符串连接。在两个用双引号括起来的字符串之
	//	间用空白隔开，C编译器会把多个字符串看作是一个字符串因此，以下3种形式是等效的：
	printf("Hello, young lovers, wherever you are.");
	printf("Hello, young "     "lovers" ", wherever you are.");
	printf("Hello, young lovers"
		", wherever you are.");
	/* * * * * * * * * 结论 * * * * * * * * *
		返回值为打印出的字符长度
	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}