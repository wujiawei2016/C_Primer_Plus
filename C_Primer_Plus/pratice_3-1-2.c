#include <stdio.h>
//�۲������������������:short����
int pratice3_1_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is pratice3_2\n");
	printf("* * * * * * * * * * * * * * * *\n");
	//int ���� ��Χ -32768~32767 short���� ��short int ��2���ֽ� ��16��������λ
	//byte inum = 0; C������byte ����
	//short num = 0; �ȼ���short int num = 0; 
	short num = 32767;// ʵ�����ֵ:32767
	//short num = 32768;// ʵ�����ֵ:-32768
	//short num = -32768;// ʵ�����ֵ:-32768
	//short num = -32769;// ʵ�����ֵ:32768
	
	printf("sizeof short %zd - ʵ�����ֵ:%d\n", sizeof(short), num);

	//*********����*********//
	//����� ���Ϊ������Сֵ ÿ����һ�������ֵҲ��1
	//����� ���Ϊ�������ֵ ÿ����һ�������ֵҲ��1
	//��ԭ����int����һ��
	//*********����*********//
	return 0;
}