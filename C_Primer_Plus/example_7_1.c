#include <stdio.h>
#define SPACE ' '����
/*
	getchar()���� :��ȡ��������ĵ����ַ� char 
	��putchar()���� ����ַ�

	������: Ϊ����ѭ���ڵ���䲻��ִ��,���Ǳ������ѭ����ִ��
	�ٶȽ��;printf ������������ݵ������� ���ǵ���ʾ�� ���Ҫ�ȵ�ѭ��������Ż�һ�����������Ļ��
	putchar ͬ��
*/
int example_7_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_7_1 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char ch;
	ch = getchar(); 
	while (ch != '\n'){
		if (ch == ' '){
			putchar(ch); 
			printf("%c", ch);
		}else {
			putchar(ch + 1);
			printf("\n%c", ch+1);
		}
		ch = getchar();
	}
	//putchar(ch);

	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}