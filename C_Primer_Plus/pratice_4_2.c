#include <stdio.h>
#include <string.h>
/*
3.��дһ�����򣬶�ȡһ����������������С�����������ӡ��Ȼ����
ָ����������ӡ��������ĸ�ʽ���������ϵͳ��ͬ��ָ����������ʾ��λ
�����ܲ�ͬ����
a.����21.3��2.1e+001��
b.����+21.290��2.129E+001��


4.��дһ��������ʾ�û�������ߣ���λ��Ӣ�磩��������Ȼ������
��ĸ�ʽ��ʾ�û����������Ϣ��
Dabney, you are 6.208 feet tall
ʹ��float���ͣ�����/��Ϊ���š������Ը�⣬����Ҫ���û�������Ϊ
��λ������ߣ�������Ϊ��λ��ʾ������

5.��дһ��������ʾ�û���������λÿ�루Mb/s��Ϊ��λ�������ٶ�
�������ֽڣ�MB��Ϊ��λ���ļ���С��������Ӧ�����ļ�������ʱ�䡣ע
�⣬����1�ֽڵ���8λ��ʹ��float���ͣ�����/��Ϊ���š��ó���Ҫ������
�ĸ�ʽ��ӡ 3 ��������ֵ�������ٶȡ��ļ���С������ʱ�䣩����ʾС����
236
������λ���֣�
At 18.12 megabits per second, a file of 2.20 megabytes
downloads in 0.97 seconds.

*/


int pratice_4_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_4_2 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	// ��ϰ 3
	/*float fnum;
	printf("plz enter a flaot num:\n");
	scanf("%f",&fnum);
	printf("Fisrt:%.1e--Second:%.1f\n", fnum, fnum);
	printf("Fisrt:%.3e--Second:%.3f\n", fnum, fnum);*/
	// ��ϰ 4
	/*float height;
	printf("plz enter your height of feet:\n");
	scanf("%f",&height);
	printf("Dabney,you are %.3f feet tall!",height);*/

	// ��ϰ 5
	float mbs;
	float filesize;
	float time;
	printf("plz enter your Download speed about mbs adb how big is the file:\n");
	scanf("%f",&mbs);
	scanf("%f",&filesize);
	time = filesize / mbs;
	printf("At %.2f megaits per second, a file of %.2f megabytes\ndownloads in %.2f seconds",
		mbs,filesize/8, time);


	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}