#include <stdio.h>
// ���������ж���ʲô��������
// 1P=2B 1B=8Y 1Y=2D 1D=3C ��Ҫ���е�λ���� ���г���,���븡���� ����ʧ����
int pratice_3_8_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice_3_8 % c\n", 7);
	printf("* * * * * * * * * * * * * * * *\n");
	float num;
	printf("plz enter how cup :\n");
	scanf("%f", &num);

	printf("p %f \n", num /2);
	printf("b %f \n", num *1 );
	printf("y %f \n", num *8 );
	printf("d %f \n", num * 8*2);
	printf("c %f \n", num * 8*2*3);
	


	return 0;
}