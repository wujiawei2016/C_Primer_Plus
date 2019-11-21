#include <stdio.h>
#include <string.h>
/*
	。程序清单10.16演示了如何使用指向二维数组的指针。
	int (* pz)[2];　　// pz指向一个内含两个int类型值的数组
	int * pax[2];　　 // pax是一个内含两个指针元素的数组，每个元素都指向int的指针
*/
int example_10_3_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_10_3 \7\n");
	printf("* * * * * * * * * * * * * * * *\n");
	int zippo[4][2] = { {  2,  4  },  {  6,  8  },  {  1,  3  },{  5,  7  } };
	int(*pz)[2];
	pz = zippo;
	printf("pz  =  %p,     pz  +  1  =  %p\n", pz, pz   + 1);//{  2,  4  },  {  6,  8  }的首地址 即 2  6的地址
	printf("pz[0]  =  %p,  pz[0]  +  1  =  %p\n", pz[0], pz[0] + 1);//2的地址 和4的地址
	printf("*pz = %p,   *pz + 1 = %p\n", *pz, *pz + 1);//2  6
	printf("pz[0][0]  =  %d\n", pz[0][0]);//2
	printf("*pz[0] = %d\n", *pz[0]);//2
	printf("**pz = %d\n", **pz);//22
	printf("pz[2][1]  =  %d\n", pz[2][1]);//3
	printf("*(*(pz+2) + 1) = %d\n", *(*(pz + 2) + 1));//3
	
	/* * * * * * * * * 结论 * * * * * * * * *
	
	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}