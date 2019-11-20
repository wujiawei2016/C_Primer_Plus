#include <stdio.h>
#include <ctype.h>
/*
5.修改程序清单8.4的猜数字程序，使用更智能的猜测策略。例如，程序
最初猜50，询问用户是猜大了、猜小了还是猜对了。如果猜小了，那么下一
次猜测的值应是50和100中值，也就是75。如果这次猜大了，那么下一次猜
测的值应是50和75的中值，等等。使用二分查找（binary search）策略，如
果用户没有欺骗程序，那么程序很快就会猜到正确的答案。

*/
int pratice_8_5_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_8_5 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");

	int num;
	int max=100;
	int min=0;
	char ch;
	printf("plz think a num in 1~100,than enter\n");

	printf("are you ready\n");
	ch = getchar();
	if (ch=='y') {
	printf("if the num is lower ,enter l ,if bigger  enter b, if right enter y\n");
	while ((ch=getchar())!='y') {
		printf("--------------------------%c\n", ch);
		printf("max %d min %d\n", max, min);
		printf("the num is %d?\n", (max+min)/2);
		
		if (ch == '\n') {
			continue;
		}
		/*if (ch=='n') {
			printf("is lower or bigger?\n");
			continue;
		}*/
		if (ch=='l') {
			printf("is lower\n");
			max = (max+min) / 2;
			printf("max %d min %d\n", max, min);
			//continue;
		}
		if (ch == 'b') {
			printf("is bigger\n");
			min = (max+min )/ 2;
			printf("max %d min %d\n", max, min);
			//continue;
		}
		if (max == min) {
			printf("it  must be %d\n", max);
			break;
		}
	
	}
	}
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}