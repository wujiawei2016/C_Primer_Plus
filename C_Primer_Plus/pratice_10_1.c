#include <stdio.h>
/*
2.��дһ�����򣬳�ʼ��һ��double���͵����飬Ȼ��Ѹ����������
������3�����������У���main()��������4�����飩��ʹ�ô������ʾ����
�������е�1�ݿ�����ʹ�ô�ָ���ʾ����ָ������ĺ������е�2�ݿ�����
��Ŀ����������Դ�������ʹ�������Ԫ�ظ�����Ϊǰ���������Ĳ�������3
��������Ŀ����������Դ��������ָ��Դ�������һ��Ԫ�غ����Ԫ�ص�ָ
�롣Ҳ����˵������������������������������ʾ��
double  source[5]  =  {1.1,  2.2,  3.3,  4.4,  5.5};
double  target1[5];
double  target2[5];
double  target3[5];
copy_arr(target1,  source,  5);
copy_ptr(target2,  source,  5);
copy_ptrs(target3, source, source + 5);
*/
#define SIZE 5
void copy_arr(double target[], double source[], int size);
void copy_ptr(double target[], double source[], int size);
void copy_ptrs(double target[], double source[], double *lastindex);//
int pratice_10_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_10_1 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	double source[SIZE] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double  target1[SIZE];
	double  target2[SIZE];
	double  target3[SIZE];
	printf("-----source p-%p\ttarget3-p-%p \tsourcetp-lastindex-p-%p  \n", source, target3, source + 5);
	printf("-----source p-%.1lf\ttarget3-p-%.1lf  \n", *source, *target3);
	copy_arr(target1, source, SIZE);
	copy_ptr(target2, source, SIZE);
	copy_ptrs(target3, source, source + 5);//ָ��+5Ҳ��ָ��,���Ժ�������ҲӦ����ָ�����β�,�����int��������������
	for (int i = 0; i < SIZE; i++)
	{
		printf("target1-%.1lf\ttarget2 %.1lf\ttarget3 %.1lf  \n", target1[i], target2[i], target3[i]);
	}
	/* * * * * * * * * ���� * * * * * * * * *

	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}

void copy_arr(double target[], double source[], int size) {
	for (int i = 0; i < size; i++)
	{
		target[i] = source[i];
	}
}
void copy_ptr(double target[], double source[], int size) {
	double *targetp = target;
	double *sourcetp = source;
	for (int i = 0; i < size; i++)
	{
		*(targetp +i) = *(sourcetp + i);
		//target[i] = *sourcetp + i;
	}
}
void copy_ptrs(double target[], double source[], double* lastindex) {
	double *targetp = target;
	double *sourcetp = source;
	printf("copy_ptrs --source p-%p\ttarget3-p-%p \t sourcetp-lastindex-p-%p  \n", source, target, lastindex);
	printf("copy_ptrs --source p-%.1lf\ttarget3-p-%.1lf  \n", *source, *target);
	for (; sourcetp <=lastindex; sourcetp++, targetp++)
	{
		printf("copy_ptrs --source p-%p\ttarget3-p-%p \tsourcetp-lastindex-p-%p \n", sourcetp, targetp, lastindex);
		printf("copy_ptrs --source-vvvv -%.1lf\ttarget3-vvvv-%.1lf  \n", *sourcetp, *targetp);
		//*target = *source;
		*targetp = *sourcetp;
		//printf("source-%.1lf\ttarget3 %.1lf  \n", *source, *target);
		//printf("source-%.1lf\ttarget3 %.1lf  \n", *sourcetp, *targetp);
	}
}