#include <stdio.h>
#include <string.h>
/*
	函数和多维数组

*/
#define ROWS 3
#define COLS 4
void sum_rows(int ar[][COLS],int rows);
int sum_2d(int [][COLS],int );
void sum_cols(int (*ar)[COLS],int rows);
int example_10_4_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_10_4 \7\n");
	printf("* * * * * * * * * * * * * * * *\n");
	int junk[3][4] = {
		{2,4,6,8},
		{3,5,7,9 },
		{12,10,8,6}
	};
	sum_rows(junk, ROWS);
	sum_cols(junk, ROWS);

	printf("sum of arr is %d", sum_2d(junk, ROWS));
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}
void sum_rows(int ar[][COLS], int rows) {
	int total = 0;
	for (int r = 0; r < rows;r++) {
		for (int c = 0; c < COLS;c++) {
			total += ar[r][c];
		}
	printf("row　%d:　sum　=　%d\n", r, total);
		total = 0;
	}

}
void sum_cols(int(*ar)[COLS], int rows) {
	int total = 0;
	for (int c = 0; c < COLS; c++) {
		for (int r = 0; r < rows; r++) {
			total += ar[r][c];
		}
	printf("col　%d:　sum　=　%d\n", c, total);
		total = 0;
	}

}
int sum_2d(int ar[][COLS], int rows) {

	int total = 0;
	for (int c = 0; c < COLS; c++) {
		for (int r = 0; r < rows; r++) {
			total += ar[r][c];
		}
	}
	return total;
}