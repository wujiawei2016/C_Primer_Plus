#include <stdio.h>
/*
1.��дһ�����򣬰��÷��ӱ�ʾ��ʱ��ת������Сʱ�ͷ��ӱ�ʾ��ʱ
�䡣ʹ��#define��const����һ����ʾ60�ķ��ų�����const������ͨ��while
ѭ�����û��ظ�����ֵ��ֱ���û�����С�ڻ����0��ֵ��ֹͣѭ����
*/
#define MINUTE 60
int pratice_5_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_5_2 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	int minute;
	printf("Plz enter the MINUTEs:");
	scanf("%d",&minute);
	
	printf("The time is %d H  %d MINUTE", minute / MINUTE, minute % MINUTE);

	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}