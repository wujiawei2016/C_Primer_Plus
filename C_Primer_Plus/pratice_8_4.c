#include <stdio.h>
#include <ctype.h>
#include "main.h"
/*
4.��дһ������������EOF֮ǰ����������Ϊ�ַ�����ȡ���ó���Ҫ
����ƽ��ÿ�����ʵ���ĸ������Ҫ�ѿհ�ͳ��Ϊ���ʵ���ĸ��ʵ���ϣ����
����Ҳ��Ӧ��ͳ�ƣ�����������ʱ��ͬ������ô�ࣨ�����Ƚ�������㣬
����ʹ��ctype.hϵ���е�ispunct()��������
*/
int pratice_8_4_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_8_4 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");

	int totalcharcount = 0;//����ĸ����
	int avecount = 0;//ƽ��ÿ��������ĸ����
	int wordscount = 0;//���ʸ���
	char ch;
	int totalcount;
	int i = 0;//���ʿ�ʼ
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
	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}