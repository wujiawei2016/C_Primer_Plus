#include <stdio.h>
/*
3.��дһ��������ʾ�û�����������Ȼ����ת������������������
�磬�û�����18����ת����2��4�졣������ĸ�ʽ��ʾ�����
18 days are 2 weeks, 4 days.
ͨ��whileѭ�����û��ظ��������������û�����һ������ֵʱ����0
��-20����ѭ��������
*/
#define MINUTE 60
int pratice_5_3_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_5_3 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	int num=0;
	printf("Plz enter days:");
	
	int i = 0;
	while (num >=0) {
		scanf("%d", &num);
		printf("%d weeks & %d days \n", num /7,num%7);
		
	}


	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}