#include <stdio.h>
#include <string.h>
/*
	�ض���,�ı���������������
	����Ӽ�������ĳɴ��ļ�����,�������Ļ�ĳ�������ļ�
*/
int example_8_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_8_2 \7\n");
	printf("* * * * * * * * * * * * * * * *\n");
	int ch;
	FILE* fp;
	char fname[50];// �����ļ���
	printf("Enter��the��name��of��the��file:��");
	scanf("%s", fname);
	fp = fopen(fname, "r");// �򿪴���ȡ�ļ�
	if (fp == NULL)// ���ʧ��
	{
		printf("Failed��to��open��file.��Bye\n");
		exit(1);// �˳�����
	}
	// getc(fp)�Ӵ򿪵��ļ��л�ȡһ���ַ�
	while((ch  = getc(fp)) != EOF)
		putchar(ch);
	fclose(fp);// �ر��ļ�

	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}