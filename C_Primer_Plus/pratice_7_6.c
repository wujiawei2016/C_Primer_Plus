#include <stdio.h>
/*
	6.��д�����ȡ���룬����#ֹͣ������ei���ֵĴ�����
	ע��
	�ó���Ҫ��¼ǰһ���ַ��͵�ǰ�ַ����á�Receive your eieio award����
	�������������ԡ�
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
	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}