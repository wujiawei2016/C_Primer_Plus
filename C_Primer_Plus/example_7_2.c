#include <stdio.h>
#include <ctype.h>��
/*
	ctype.hͷ�ļ���������:
	1	int isalnum(int c)
	�ú�������������ַ��Ƿ�����ĸ�����֡�
	2	int isalpha(int c)
	�ú�������������ַ��Ƿ�����ĸ��
	3	int iscntrl(int c)
	�ú�������������ַ��Ƿ��ǿ����ַ���
	4	int isdigit(int c)
	�ú�������������ַ��Ƿ���ʮ�������֡�
	5	int isgraph(int c)
	�ú�������������ַ��Ƿ���ͼ�α�ʾ����
	6	int islower(int c)
	�ú�������������ַ��Ƿ���Сд��ĸ��
	7	int isprint(int c)
	�ú�������������ַ��Ƿ��ǿɴ�ӡ�ġ�
	8	int ispunct(int c)
	�ú�������������ַ��Ƿ��Ǳ������ַ���
	9	int isspace(int c)
	�ú�������������ַ��Ƿ��ǿհ��ַ���
	10	int isupper(int c)
	�ú�������������ַ��Ƿ��Ǵ�д��ĸ��
	11	int isxdigit(int c)
	�ú�������������ַ��Ƿ���ʮ���������֡�
	��׼�⻹����������ת�����������ǽ��ܲ�����һ�� "int"

	���	���� & ����
	1	int tolower(int c)
	�ú����Ѵ�д��ĸת��ΪСд��ĸ��
	2	int toupper(int c)
	�ú�����Сд��ĸת��Ϊ��д��ĸ��
*/
int example_7_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_7_1 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char ch;
	ch = getchar();
	if (isdigit(ch)) {
		printf("is a  num");
	}
	else if (isalpha(ch)) {
		printf("is a letter ");
	}

	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}