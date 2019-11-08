#include <stdio.h>
//scanf()函数的用法打印char类型 熟悉一下ASCII码表 
int pratice_3_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice3_2\n");
	printf("* * * * * * * * * * * * * * * *\n");

	printf("请输入一个ASCII码值:\n");
	char c='0';
	scanf("%c", &c);

	printf("%c\n",c);
	
	return 0;
}