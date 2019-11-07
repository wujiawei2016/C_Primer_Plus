#include <stdio.h>
//#include "../Util/util.c"

//练习内容:熟悉使用printf函数 换行符 制表符
void jolly();
void deny();
void br();
void smile();
void one_three();
void two();

int pratice1_main() {
	//printf("* * * * * * * * * * * * * * * *\n");
	//printf("this is pratice1\n");
	//printf("* * * * * * * * * * * * * * * *\n");
	////printf_line();
	//printf("Gustav Mahler\n");
	//printf("Gustav\nMahler\n");
	//printf("Gustav\t");
	//printf("Mahler\n");

	//printf("* * * * * * * * * * * * * * * *\n");
	//printf("this is pratice1_2\n");
	//printf("* * * * * * * * * * * * * * * *\n");
	//printf("www ,shenzhen mingzhi\n");

	//printf("* * * * * * * * * * * * * * * *\n");
	//printf("this is pratice1_3\n");
	//printf("* * * * * * * * * * * * * * * *\n");
	//int age = 29;
	//int year = 365;
	//printf("%d岁 =  %d天\n", age, age * year);



	/*printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice1_4\n");
	printf("* * * * * * * * * * * * * * * *\n");
	jolly();
	jolly();
	jolly();
	deny();


	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice1_5\n");
	printf("* * * * * * * * * * * * * * * *\n");
	br();
	printf("India, China\nIndia, China\n");
	br();


	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice1_6\n");
	printf("* * * * * * * * * * * * * * * *\n");

	int toes = 10;
	printf("%d  &  %d\n", toes* toes, toes + toes);*/

	/*printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice1_7\n");
	printf("* * * * * * * * * * * * * * * *\n");
	smile(); 
	smile();
	smile();
	printf("\n");
	smile();
	smile();
	printf("\n");
	smile();
	printf("\n");*/

	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice1_8\n");
	printf("* * * * * * * * * * * * * * * *\n");
	one_three();

	return 0;
}
void one_three() {
	printf("starting now:\n");
	printf("one\n");
	two();
	printf("three\n");
	printf("done!\n");

}
void two() {
	printf("two\n");
}
void smile() {
	printf("Smile!");
}void br() {
	printf("Brazil, Russia, ");
}
void jolly() {
	printf("For he's a jolly good fellow!\n");
}
void deny() {
	printf("Which nobody can deny\n");
}