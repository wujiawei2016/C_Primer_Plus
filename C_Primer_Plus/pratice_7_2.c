#include <stdio.h>
/*
2.��дһ�������ȡ���룬����#�ַ�ֹͣ������Ҫ��ӡÿ���������
���Լ���Ӧ��ASCII�루ʮ���ƣ���һ�д�ӡ8���ַ�������:ʹ���ַ�����
����ģ�������%����ÿ8��ѭ������ʱ��ӡһ�����з���
*/
int pratice_7_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_7_2 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char ch;
	int spaceCount = 0;
	int nCount = 0;
	int count = 0;
	while ((ch = getchar()) != '#') {
		count++;
		printf("%d_%d\t",count, ch);
		if (count%8==0) {
			printf(" \n");
		}


	}
	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}