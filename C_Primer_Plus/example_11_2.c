

#include <stdio.h>
#include <string.h>
#include <limits.h>
/*
	//scanf(),gets()��fgets()�� gets_s()������
	��puts()��fputs()��printf()��
	ע�⣬gets()���������еĻ��з�������puts()���������ӻ��з�����
    һ���棬fgets()���������еĻ��з���fputs()�����������ӻ��з���
*/

int example_11_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_11_2 \7\n");
	printf("* * * * * * * * * * * * * * * *\n");
	
	char str[10];
	char str1[1024] = "this is str 1111111111111111111111";
	char str2[1024] = "this is str 2222222222222222222222";
	char str3[1024] = "this is str 3333333333333333333333";
	//gets(str);//���볬������Ŀռ��Сʱ�ᵼ���ַ���û��ֹͣ��'\0'
	//gets_s(str, 10);
	int fgets_back_value=fgets(str, 10, stdin);//����ֵΪstr�ĵ�ַ
	int fputs_back_value=fputs(str, stdout);//����ֵΪ0

	//puts(str);//����ỻ�з�
	//puts(str1);
	printf("%p %p %d", fgets_back_value, str, fputs_back_value);



	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}