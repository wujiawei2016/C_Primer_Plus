#include <stdio.h>
#include <ctype.h>
/*

*/
int pratice_7_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_7_1 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	
	char ch;
	int spaceCount = 0;
	int nCount = 0;
	int count = 0;
	while ((ch =getchar())!='#') {
		putchar(ch);
		if (ch ==' ') {
			spaceCount++;
		}
		 if(ch == '\n'){
			nCount++;
		}
		count++;
	}
	//printf("%d", '\n');
	printf("space count is :%d \\n count is %d total is %d", spaceCount, nCount, count);

	/* * * * * * * * * 结论 * * * * * * * * *
		
	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}