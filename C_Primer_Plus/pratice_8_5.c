#include <stdio.h>
#include <ctype.h>
/*
5.�޸ĳ����嵥8.4�Ĳ����ֳ���ʹ�ø����ܵĲ²���ԡ����磬����
�����50��ѯ���û��ǲ´��ˡ���С�˻��ǲ¶��ˡ������С�ˣ���ô��һ
�β²��ֵӦ��50��100��ֵ��Ҳ����75�������β´��ˣ���ô��һ�β�
���ֵӦ��50��75����ֵ���ȵȡ�ʹ�ö��ֲ��ң�binary search�����ԣ���
���û�û����ƭ������ô����ܿ�ͻ�µ���ȷ�Ĵ𰸡�

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
	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}