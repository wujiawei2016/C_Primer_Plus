#include <stdio.h>
/*
8.��дһ��������ʾ��ģ����Ľ�������û�����ĵ�1��������Ϊ
��ģ������ĵ�2��������󣬸�������������б��ֲ��䡣�û���������
�����ǵ�1��������󡣵��û�����һ������ֵʱ����������������ʾ��
���£�
This��program��computes��moduli.
Enter��an��integer��to��serve��as��the��second��operand:��256
Now��enter��the��first��operand:��438
438��%��256��is��182
Enter��next��number��for��first��operand��(<=��0��to��quit):��1234567
1234567��%��256��is��135
Enter��next��number��for��first��operand��(<=��0��to��quit):��0
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
		printf("ȡ��Ϊ%d\n", num2 % num1);
	}
	
	/* * * * * * * * * ���� * * * * * * * * *
		
	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}