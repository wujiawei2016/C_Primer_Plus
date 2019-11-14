#include <stdio.h>
/*
4.编写一个程序，提示用户输入一个身高（单位：厘米），并分别以厘
米和英寸为单位显示该值，允许有小数部分。程序应该能让用户重复输入身
高，直到用户输入一个非正值。其输出示例如下：
Enter　a　height　in　centimeters:　182
182.0　cm　=　5　feet,　11.7　inches
Enter　a　height　in　centimeters　(<=0　to　quit):　168.7
168.0　cm　=　5　feet,　6.4　inches
Enter　a　height　in　centimeters　(<=0　to　quit):　0
bye
*/
#define MINUTE 60
int pratice_5_4_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_5_4 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	float height =0.0;
	

	while (height >= 0) {
		printf("Plz  enter your height with cm:");
		scanf("%f", &height);
		printf("your height is %f cm or %f inch\n", height, height / 2.54);
	}


	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}