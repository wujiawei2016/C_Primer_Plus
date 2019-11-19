#include <stdio.h>
#include <ctype.h>
#include "main.h"
/*
4.编写一个程序，在遇到EOF之前，把输入作为字符流读取。该程序要
报告平均每个单词的字母数。不要把空白统计为单词的字母。实际上，标点
符号也不应该统计，但是现在暂时不同考虑这么多（如果你比较在意这点，
考虑使用ctype.h系列中的ispunct()函数）。
*/
int pratice_8_4_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_8_4 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");

	int totalcharcount = 0;//总字母数量
	int avecount = 0;//平均每个单词字母数量
	int wordscount = 0;//单词个数
	char ch;
	int totalcount;
	int i = 0;//单词开始
	while ((ch = getchar()) != EOF) {
		if (isupper(ch)||islower(ch)) {
			i++;
			totalcharcount++;
		}
		if (isspace(ch)) {
			if (i!=0) {
				wordscount++;
			}
			i* PI;
			i = 0;
		}
		
	}
	avecount = totalcharcount / wordscount;
	printf("totalcharcount-%d __wordscount-%d__ avecount-%d", totalcharcount, wordscount, avecount);
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}