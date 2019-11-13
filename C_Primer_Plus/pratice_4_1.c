#include <stdio.h>
#include <string.h>
/*
练习1.编写一个程序，提示用户输入名和姓，然后以“名,姓”的格式打印出来。
	该题目与第二题可以合并

练习2.编写一个程序，提示用户输入名和姓，并执行一下操作：
	a.打印名和姓，包括双引号；
	b.在宽度为20的字段右端打印名和姓，包括双引号；
	c.在宽度为20的字段左端打印名和姓，包括双引号；
	d.在比姓名宽度宽3的字段中打印名和姓。

练习6.编写一个程序，先提示用户输入名，然后提示用户输入姓。在一行打
	印用户输入的名和姓，下一行分别打印名和姓的字母数。字母数要与相应名
	和姓的结尾对齐，如下所示：
	Melissa Honeybee
	7　　　　8
	接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐，
	如下所示：
	Melissa Honeybee
	7　　　 8
*/
int pratice_4_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_4_1 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char name[30];
	char firstname[30];
	printf("plz enter your name:\n");
	scanf("%s", name);
	printf("plz enter your first name:\n");
	scanf("%s", firstname);
	printf("\"%20s%20s\"\n",name,firstname);
	printf("\"%-20s%-20s\"\n",name,firstname);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("\"%d---%d\"\n", strlen(name), strlen(firstname));
	printf("\"|%*s|%*s|\"\n", (int)(strlen(name)+3),name,(int)(strlen(firstname) + 3), firstname);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("|%-*s|%-*s|\n", (int)(strlen(name) ), name, (int)(strlen(firstname)), firstname);
	printf("|%-*d|%-*d|\n", strlen(name) , strlen(name), strlen(firstname), strlen(firstname));

	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}