#include <stdio.h>
#include <string.h>
/*
��ϰ1.��дһ��������ʾ�û����������գ�Ȼ���ԡ���,�ա��ĸ�ʽ��ӡ������
	����Ŀ��ڶ�����Ժϲ�

��ϰ2.��дһ��������ʾ�û����������գ���ִ��һ�²�����
	a.��ӡ�����գ�����˫���ţ�
	b.�ڿ��Ϊ20���ֶ��Ҷ˴�ӡ�����գ�����˫���ţ�
	c.�ڿ��Ϊ20���ֶ���˴�ӡ�����գ�����˫���ţ�
	d.�ڱ�������ȿ�3���ֶ��д�ӡ�����ա�

��ϰ6.��дһ����������ʾ�û���������Ȼ����ʾ�û������ա���һ�д�
	ӡ�û�����������գ���һ�зֱ��ӡ�����յ���ĸ������ĸ��Ҫ����Ӧ��
	���յĽ�β���룬������ʾ��
	Melissa Honeybee
	7��������8
	���������ٴ�ӡ��ͬ����Ϣ��������ĸ��������Ӧ�����յĿ�ͷ���룬
	������ʾ��
	Melissa Honeybee
	7������ 8
*/
int pratice_4_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_4_1 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char name[30];
	char firstname[30];
	printf("plz enter your name:\n");
	scanf("%s", name);
	printf("plz enter your first name:\n");
	scanf("%s", firstname);
	printf("\"%20s%20s\"\n",name,firstname);
	printf("\"%-20s%-20s\"\n",name,firstname);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("\"%d---%d\"\n", strlen(name), strlen(firstname));
	printf("\"|%*s|%*s|\"\n", (int)(strlen(name)+3),name,(int)(strlen(firstname) + 3), firstname);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("|%-*s|%-*s|\n", (int)(strlen(name) ), name, (int)(strlen(firstname)), firstname);
	printf("|%-*d|%-*d|\n", strlen(name) , strlen(name), strlen(firstname), strlen(firstname));

	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}