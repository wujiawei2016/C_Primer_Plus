#include <stdio.h>
#include <ctype.h>

/*
3.��дһ������������ EOF ֮ǰ����������Ϊ�ַ�����ȡ���ó���
Ҫ���������еĴ�д��ĸ��Сд��ĸ�ĸ����������Сд��ĸ��ֵ������
�ġ�����ʹ��ctype.h���к��ʵķ��ຯ��������
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
	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}