

#include <stdio.h>
#include <string.h>
#include <limits.h>
/*
	//scanf(),gets()��fgets()�� gets_s()������
	��put()��fputs()��printf()��
	ע�⣬gets()���������еĻ��з�������puts()���������ӻ��з�����
    һ���棬fgets()���������еĻ��з���fputs()�����������ӻ��з���
*/

int example_11_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_11_2 \7\n");
	printf("* * * * * * * * * * * * * * * *\n");
	int i = 0;
	while (i<=INT_MAX&&i>=0)
		printf("%d\n", i+=10000);
		printf(" i %d\n", i);

	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}