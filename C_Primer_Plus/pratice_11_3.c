#include <stdio.h>
#include <string.h>
/*
5.��Ʋ�����һ��������������1�������β�ָ�����ַ����������в�
�ҵ�2�������β�ָ�����ַ��״γ��ֵ�λ�á�����ɹ����ú�����ָ���
�ַ���ָ�룬������ַ�����δ�ҵ�ָ���ַ����򷵻ؿ�ָ�루�ú����Ĺ�
���� strchr()������ͬ������һ�������ĳ����в��Ըú�����ʹ��һ��ѭ��
�������ṩ����ֵ��
6.��дһ����Ϊis_within()�ĺ���������һ���ַ���һ��ָ���ַ�����
ָ����Ϊ���������βΡ����ָ���ַ����ַ����У��ú�������һ������ֵ
����Ϊ�棩�����򣬷���0����Ϊ�٣�����һ�������ĳ����в��Ըú�����
ʹ��һ��ѭ���������ṩ����ֵ��

�����Ȿ����ͬ
*/
char* getindex(char *str,char ch);
int pratice_11_3_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_11_3 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char str[1024];
	/*while () {
	
	}*/
	printf("%p\n", getindex(str, 'g'));
	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}
char* getindex(char* str, char ch) {
	printf("getindex-%p\n", str);
	char* temp = str;
	while ( *temp != '\0') {
		if (*temp == ch) {
			break;
		}
		else {
		temp++;
		}
	}
	if (temp>= str+strlen(str)) {
		temp = NULL;
	}
	return temp;
}