#include <stdio.h>
/*
2.编写一个程序，初始化一个double类型的数组，然后把该数组的内容
拷贝至3个其他数组中（在main()中声明这4个数组）。使用带数组表示法的
函数进行第1份拷贝。使用带指针表示法和指针递增的函数进行第2份拷贝。
把目标数组名、源数组名和待拷贝的元素个数作为前两个函数的参数。第3
个函数以目标数组名、源数组名和指向源数组最后一个元素后面的元素的指
针。也就是说，给定以下声明，则函数调用如下所示：
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
	copy_ptrs(target3, source, source + 5);//指针+5也是指针,所以函数方法也应该用指针做形参,如果用int类型则会出现问题
	for (int i = 0; i < SIZE; i++)
	{
		printf("target1-%.1lf\ttarget2 %.1lf\ttarget3 %.1lf  \n", target1[i], target2[i], target3[i]);
	}
	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
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