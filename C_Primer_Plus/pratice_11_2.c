#include <stdio.h>
#include <string.h>
/*

*/
char* pr(char* str);
int pratice_11_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_11_2 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char str[] = "Ho Ho Ho!";
	pr("");
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}
char* pr(char* str)
{
	char* pc;
	pc   = str;
	while (*pc)
		putchar(*pc++);
	do  {
	putchar(*--pc);
	}  while  (pc   - str);
	return  (pc);
}
