#include <stdio.h>
/*
1.编写一个程序，提示用户输入名和姓，然后以“名,姓”的格式打印出来。
	该题目与第二题可以合并

2.编写一个程序，提示用户输入名和姓，并执行一下操作：
	a.打印名和姓，包括双引号；
	b.在宽度为20的字段右端打印名和姓，包括双引号；
	c.在宽度为20的字段左端打印名和姓，包括双引号；
	d.在比姓名宽度宽3的字段中打印名和姓。
*/
int pratice_4_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice_4_1 % c\n", 7);
	printf("* * * * * * * * * * * * * * * *\n");
	char name[30];
	char firstname[30];
	printf("plz enter your name:\n");
	scanf("%s", name);
	printf("plz enter your first name:\n");
	scanf("%s", firstname);
	printf("\" %s %s \"\n",name,firstname);
	printf("\" %s %s\"\n",name,firstname);


	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}