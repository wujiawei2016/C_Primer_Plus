#include <stdio.h>
#include <string.h>
/*
	�������嵥10.16��ʾ�����ʹ��ָ���ά�����ָ�롣
	int (* pz)[2];����// pzָ��һ���ں�����int����ֵ������
	int * pax[2];���� // pax��һ���ں�����ָ��Ԫ�ص����飬ÿ��Ԫ�ض�ָ��int��ָ��
*/
int example_10_3_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_10_3 \7\n");
	printf("* * * * * * * * * * * * * * * *\n");
	int zippo[4][2] = { {  2,  4  },  {  6,  8  },  {  1,  3  },{  5,  7  } };
	int(*pz)[2];
	pz = zippo;
	printf("pz  =  %p,     pz  +  1  =  %p\n", pz, pz   + 1);//{  2,  4  },  {  6,  8  }���׵�ַ �� 2  6�ĵ�ַ
	printf("pz[0]  =  %p,  pz[0]  +  1  =  %p\n", pz[0], pz[0] + 1);//2�ĵ�ַ ��4�ĵ�ַ
	printf("*pz = %p,   *pz + 1 = %p\n", *pz, *pz + 1);//2  6
	printf("pz[0][0]  =  %d\n", pz[0][0]);//2
	printf("*pz[0] = %d\n", *pz[0]);//2
	printf("**pz = %d\n", **pz);//22
	printf("pz[2][1]  =  %d\n", pz[2][1]);//3
	printf("*(*(pz+2) + 1) = %d\n", *(*(pz + 2) + 1));//3
	
	/* * * * * * * * * ���� * * * * * * * * *
	
	* * * * * * * * * ���� * * * * * * * * */
	return 0;
}