#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <float.h>
/*
	例题:4.5 
	
	C头文件limits.h和float.h分别提供了与整数类型和浮点类型大小限制相关的详细信息。
	如int类型的最大值INT_MAX,最小值INT_MIN
	以下为详细内容:数值为一般情况,根据不同系统有些值会变动
	CHAR_BIT	8	定义一个字节的比特数。
	SCHAR_MIN	-128	定义一个有符号字符的最小值。
	SCHAR_MAX	127	定义一个有符号字符的最大值。
	UCHAR_MAX	255	定义一个无符号字符的最大值。
	CHAR_MIN	0	定义类型 char 的最小值，如果 char 表示负值，则它的值等于 SCHAR_MIN，否则等于 0。
	CHAR_MAX	127	定义类型 char 的最大值，如果 char 表示负值，则它的值等于 SCHAR_MAX，否则等于 UCHAR_MAX。
	MB_LEN_MAX	1	定义多字节字符中的最大字节数。
	SHRT_MIN	-32768	定义一个短整型的最小值。
	SHRT_MAX	+32767	定义一个短整型的最大值。
	USHRT_MAX	65535	定义一个无符号短整型的最大值。
	INT_MIN	-32768	定义一个整型的最小值。
	INT_MAX	+32767	定义一个整型的最大值。
	UINT_MAX	65535	定义一个无符号整型的最大值。
	LONG_MIN	-2147483648	定义一个长整型的最小值。
	LONG_MAX	+2147483647	定义一个长整型的最大值。
	ULONG_MAX	4294967295	定义一个无符号长整型的最大值。

	

	float.h头文件中也定义一些明示常量，如FLT_DIG和DBL_DIG，分别表示float类型和double类型的有效数字位数。
	C 标准库的 float.h 头文件包含了一组与浮点值相关的依赖于平台的常量。这些常量是由 ANSI C 提出的，这让程序更具有可移植性。在讲解这些常量之前，最好先弄清楚浮点数是由下面四个元素组成的：

	组件	组件描述
	S		符号 ( +/- )
	b		指数表示的基数，2 表示二进制，10 表示十进制，16 表示十六进制，等等...
	e		指数，一个介于最小值 emin 和最大值 emax 之间的整数。
	p		精度，基数 b 的有效位数
	基于以上 4 个组成部分，一个浮点数的值如下：
	floating-point = ( S ) p x be
	或floating-point = (+/-) precision x baseexponent
	以下几种是我觉的要用的到的:
	这些宏定义了 FLT_RADIX 基数中的位数---FLT_MANT_DIG; DBL_MANT_DIG; LDBL_MANT_DIG
	这些宏定义最大的有限浮点值---FLT_MAX 1E+37;DBL_MAX 1E+37;LDBL_MAX 1E+37

*/
#define DENSITY 62.4
int example_4_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("this is example_4_2 \7\n");
	printf("* * * * * * * * * * * * * * * *\n");
	
	printf("Some number limits for this system:\n");
	printf("Biggest int: %d\n", INT_MAX);
	printf("Smallest long long: %lld\n", LLONG_MIN);
	printf("One byte = %d bits on this system.\n", CHAR_BIT);
	printf("Largest double: %e\n", DBL_MAX);
	printf("Smallest normal float: %e\n", FLT_MIN);
	printf("float precision = %d digits\n", FLT_DIG);
	printf("float epsilon = %e\n", FLT_EPSILON);

	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}