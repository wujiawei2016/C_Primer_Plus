#include <stdio.h>
/*
8.编写一个程序，显示求模运算的结果。把用户输入的第1个整数作为
求模运算符的第2个运算对象，该数在运算过程中保持不变。用户后面输入
的数是第1个运算对象。当用户输入一个非正值时，程序结束。其输出示例
如下：
This　program　computes　moduli.
Enter　an　integer　to　serve　as　the　second　operand:　256
Now　enter　the　first　operand:　438
438　%　256　is　182
Enter　next　number　for　first　operand　(<=　0　to　quit):　1234567
1234567　%　256　is　135
Enter　next　number　for　first　operand　(<=　0　to　quit):　0
Done
*/
int pratice_5_8_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_5_8 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");

	int num1 = 0;
	int num2 = 1;
	scanf("%d", &num1);
	while (num2>0){
		scanf("%d", &num2);
		printf("取余为%d\n", num2 % num1);
	}
	
	/* * * * * * * * * 结论 * * * * * * * * *
		
	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}