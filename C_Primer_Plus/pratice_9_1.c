#include <stdio.h>
/*
1.���һ������min(x, y)����������double����ֵ�Ľ�Сֵ����һ����
�����������в��Ըú�����
2.���һ������chline(ch, i, j)����ӡָ�����ַ�j��i�С���һ���򵥵���
�������в��Ըú�����
*/
double min(double, double);
void chline(char,int,int);
int pratice_9_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_9_1 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");

	chline('A', 3, 5);
	
	double num1=0;
	double num2=0;

	printf("plz enter first num\n");
	scanf("%lf", &num1);
	printf("plz enter second num\n");
	scanf("%lf", &num2);

	printf("the min num is %lf\n", min(num1, num2));
	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}
double min(double a, double b) {
	double min = a;
	if (a > b) {
		min = b;
	}
	return min;
}
void chline(char c, int i, int j) {

	for (int row = 0; row < i; row++) {
		for (int columns = 0; columns < j; columns++) {
			putchar(c);
		}
		printf("\n");
	}

}