#include <stdio.h>
#include <string.h>
/*
	�����嵥10.13��ʾ��ָ������� 8�ֻ���������������Щ������������
ʹ�ù�ϵ��������Ƚ�ָ�롣
*/
int example_10_1_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_10_1 \7\n");
	printf("* * * * * * * * * * * * * * * *\n");

	int urn[5] = { 100, 200, 300, 400, 500 };
	int* ptr1, * ptr2, * ptr3;
	ptr1 = urn;       // ��һ����ַ����ָ��
	ptr2 = &urn[2];     // ��һ����ַ����ָ��
	// ������ָ�룬�Լ����ָ��ĵ�ַ
	printf("pointer value, dereferenced pointer, pointer address:\n");
	printf("ptr1 = %p, *ptr1 =%d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
	// ָ��ӷ�
	ptr3  = ptr1  + 4;
	printf("\nadding an int to a pointer:\n");
	printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));
	ptr1++;         // ����ָ��
	printf("\nvalues after ptr1++:\n");
	printf("ptr1 = %p, *ptr1 =%d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
	ptr2--;         // �ݼ�ָ��
	printf("\nvalues after --ptr2:\n");
	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
	--ptr1;         // �ָ�Ϊ��ʼֵ
	++ptr2;         // �ָ�Ϊ��ʼֵ
	printf("\nPointers reset to original values:\n");
	printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
	// һ��ָ���ȥ��һ��ָ��
	printf("\nsubtracting one pointer from another:\n");
	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n",
		ptr2, ptr1, ptr2  - ptr1);
	// һ��ָ���ȥһ������
	printf("\nsubtracting an int from a pointer:\n");

	printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3  - 2);

	/* * * * * * * * * ���� * * * * * * * * *
		���:����(��)�Ǵ��������ַ�ϵ�(λ��/�Ҽ�),ָ��ʵ�ʾ��������ַ��ֵ(�Ҽ����ƺ���),
	ָ�뱾����һ������(����XX��XX��)
	,�⴮����(���ƺ���)��ʾ���Ǵ��ĳ������(��)���ڵ������ַ(λ��)
	�����ݱ�����Ҫ��ŵ������ַ��,��˾ʹ��ڵ�ַ�ĵ�ַ
	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}