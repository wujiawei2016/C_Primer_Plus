#include <stdio.h>
// ���������ж���ʲô��������,��һ��Ϊ�ϴ�ֵ ����Ϊ��Сֵ
//һ��ˮ��������Ϊ3*10��-23�η�������double 1����ˮ��850�� int�� 
int pratice_3_6_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice_3_5 % c\n", 7);
	printf("* * * * * * * * * * * * * * * *\n");
	const float perm = 3e-23;
	const int kt = 850;
	int num;
	printf("plz enter what m of water :\n");
	scanf("%d", &num);

	printf(" %f\n",  ( num*kt)/perm);
	printf(" %e\n", (num * kt )/ perm);

	return 0;
}