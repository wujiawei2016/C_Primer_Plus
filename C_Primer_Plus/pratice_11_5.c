#include <stdio.h>
#include <string.h>
/*
8.编写一个名为string_in()的函数，接受两个指向字符串的指针作为参
数。如果第2个字符串中包含第1个字符串，该函数将返回第1个字符串开始
的地址。例如，string_in("hats", "at")将返回hats中a的地址。否则，该函数返
回空指针。在一个完整的程序中测试该函数，使用一个循环给函数提供输入
值。
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
	
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
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
						str2point = str2;//如果不匹配 指针2复位到最初值
						str1point = temppoint;//如果不匹配 指针1复位到之前找到首字母匹配的位置
						point = NULL;
						break;//一旦有字符不匹配则跳出当前for循环
					}
				}
				if (
					//str2point == str2 + lenstr2||
					*str2point=='\0') {
					//当for循环结束时指针指向str2最后一个字符'\0'时表明所有字符全部匹配跳出当前循环
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
