#include <stdio.h>
#include <string.h>
/*
8.��дһ����Ϊstring_in()�ĺ�������������ָ���ַ�����ָ����Ϊ��
���������2���ַ����а�����1���ַ������ú��������ص�1���ַ�����ʼ
�ĵ�ַ�����磬string_in("hats", "at")������hats��a�ĵ�ַ�����򣬸ú�����
�ؿ�ָ�롣��һ�������ĳ����в��Ըú�����ʹ��һ��ѭ���������ṩ����
ֵ��
*/
char* string_in(char*,char*);
int pratice_11_5_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_11_5 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	char* str1= "abmcdefghjklqwertyuiopzxcvbnm";
	char* str2= "efghjklqwertyu";
	printf("str1-%p  string_in-%p---%s\n",str1 ,string_in(str1,str2), string_in(str1, str2));
	
	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}
char* string_in(char* str1, char* str2) {
	char* str1point=str1;
	char* str2point= str2;
	char* point= str1;
	char* temppoint;
	int lenstr2 = strlen(str2);
	int lenstr1 = strlen(str1);
	while (*str1point!='\0') {
		if (str1point + lenstr2 > str1 + lenstr1) {
			point = NULL;
		}else {
			if (*str1point == *str2point) {
				temppoint = str1point;
				point = str1point;
				for (; str2point - str2 < lenstr2; str2point++, str1point++) {
					if (*str2point != *str1point) {
						str2point = str2;//�����ƥ�� ָ��2��λ�����ֵ
						str1point = temppoint;//�����ƥ�� ָ��1��λ��֮ǰ�ҵ�����ĸƥ���λ��
						point = NULL;
						break;//һ�����ַ���ƥ����������ǰforѭ��
					}
				}
				if (
					//str2point == str2 + lenstr2||
					*str2point=='\0') {
					//��forѭ������ʱָ��ָ��str2���һ���ַ�'\0'ʱ���������ַ�ȫ��ƥ��������ǰѭ��
					break;
				}
				
			}
			else {
				point = NULL;
			}
		}
		str1point++;
	}
	return point;
}
