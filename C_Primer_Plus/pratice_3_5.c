#include <stdio.h>
// ���������ж���ʲô��������
//һ�������Ϊ3.156*10��7�η� ������Ҫʹ�ø����� ��ǰΪint����
int pratice_3_5_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice_3_5 % c\n", 7);
	printf("* * * * * * * * * * * * * * * *\n");
	const float yearseconds = 3.156e7;
	int num;
	printf("plz enter your age :\n");
	scanf("%d", &num);

	printf(" %f\n", yearseconds*num);
	printf(" %e\n", yearseconds*num);
	
	return 0;
}