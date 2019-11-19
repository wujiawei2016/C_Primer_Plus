#include <stdio.h>
#include <ctype.h>

/*
3.编写一个程序，在遇到 EOF 之前，把输入作为字符流读取。该程序
要报告输入中的大写字母和小写字母的个数。假设大小写字母数值是连续
的。或者使用ctype.h库中合适的分类函数更方便
*/
int pratice_8_3_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_8_3 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char ch;
	int upcount = 0;
	int lowcount = 0;
	while ((ch = getchar()) != EOF) {
		if (isupper(ch)) {
			upcount++;
		}if (islower(ch)) {
			lowcount++;
		}
		
			
		
	}
	printf("upcount-%d____lowcount-%d\t", upcount, lowcount);
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}