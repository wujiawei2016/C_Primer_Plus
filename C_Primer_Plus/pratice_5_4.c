#include <stdio.h>
/*
4.��дһ��������ʾ�û�����һ����ߣ���λ�����ף������ֱ�����
�׺�Ӣ��Ϊ��λ��ʾ��ֵ��������С�����֡�����Ӧ�������û��ظ�������
�ߣ�ֱ���û�����һ������ֵ�������ʾ�����£�
Enter��a��height��in��centimeters:��182
182.0��cm��=��5��feet,��11.7��inches
Enter��a��height��in��centimeters��(<=0��to��quit):��168.7
168.0��cm��=��5��feet,��6.4��inches
Enter��a��height��in��centimeters��(<=0��to��quit):��0
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


	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}