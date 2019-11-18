#include <stdio.h>
/*
	6.编写程序读取输入，读到#停止，报告ei出现的次数。
	注意
	该程序要记录前一个字符和当前字符。用“Receive your eieio award”这
	样的输入来测试。
*/
int pratice_7_6_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_7_6 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char lastchar=' ';
	char currentchar;
	int count=0;
	while ((currentchar = getchar()) != '#') {
		if (lastchar=='e'&& currentchar=='i')
		{
			count++;
		}
			
			lastchar = currentchar;
	}
	printf("\"ei\" count :%d \n",count);
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}