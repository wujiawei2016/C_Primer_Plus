#include <stdio.h>
/*
2.编写一个程序，在遇到 EOF 之前，把输入作为字符流读取。程序要
打印每个输入的字符及其相应的ASCII十进制值。注意，在ASCII序列中，空
格字符前面的字符都是非打印字符，要特殊处理这些字符。如果非打印字符
是换行符或制表符，则分别打印\n或\t。否则，使用控制字符表示法。例
如，ASCII的1是Ctrl+A，可显示为^A。注意，A的ASCII值是Ctrl+A的值加上
64。其他非打印字符也有类似的关系。除每次遇到换行符打印新的一行之
外，每行打印10对值。（注意：不同的操作系统其控制字符可能不同。）
*/
int pratice_8_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_8_2 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");

	char ch;
	while ((ch = getchar()) != EOF) {
		//putchar(ch);
		if (ch == '\n') {
			printf("\\n\t");
		}
		else if (ch == '\t') {
			printf("\\t\t");
		}else {
			printf("%c-%d\t", ch, ch);
		}
		//continue;
	}
	
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}