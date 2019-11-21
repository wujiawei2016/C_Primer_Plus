#include <stdio.h>
#include <string.h>
/*
	程序清单10.13演示了指针变量的 8种基本操作。除了这些操作，还可以
使用关系运算符来比较指针。
*/
int example_10_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_10_1 \7\n");
	printf("* * * * * * * * * * * * * * * *\n");

	int urn[5] = { 100, 200, 300, 400, 500 };
	int* ptr1, * ptr2, * ptr3;
	ptr1 = urn;       // 把一个地址赋给指针
	ptr2 = &urn[2];     // 把一个地址赋给指针
	// 解引用指针，以及获得指针的地址
	printf("pointer value, dereferenced pointer, pointer address:\n");
	printf("ptr1 = %p, *ptr1 =%d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
	// 指针加法
	ptr3  = ptr1  + 4;
	printf("\nadding an int to a pointer:\n");
	printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));
	ptr1++;         // 递增指针
	printf("\nvalues after ptr1++:\n");
	printf("ptr1 = %p, *ptr1 =%d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
	ptr2--;         // 递减指针
	printf("\nvalues after --ptr2:\n");
	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
	--ptr1;         // 恢复为初始值
	++ptr2;         // 恢复为初始值
	printf("\nPointers reset to original values:\n");
	printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
	// 一个指针减去另一个指针
	printf("\nsubtracting one pointer from another:\n");
	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n",
		ptr2, ptr1, ptr2  - ptr1);
	// 一个指针减去一个整数
	printf("\nsubtracting an int from a pointer:\n");

	printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3  - 2);

	/* * * * * * * * * 结论 * * * * * * * * *
		理解:数据(我)是存在物理地址上的(位置/我家),指针实质就是物理地址的值(我家门牌号码),
	指针本身是一串数据(比如XX街XX号)
	,这串数据(门牌号码)表示我们存的某个数据(我)所在的物理地址(位置)
	且数据本身需要存放到物理地址上,因此就存在地址的地址
	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}