#include <stdio.h>
/*
	
*/
int pratice_8_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_8_1 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	
	FILE* filepoint;
	char ch;
	int count = 0;
	filepoint = fopen("example_simple.c","r");
	if (filepoint == NULL) {
		printf("fail");
	}

	while ((ch = getc(filepoint)) != EOF) {
		count++;
		putchar(ch);
	}
	printf("char count: %d", count);
	fclose(filepoint);
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}