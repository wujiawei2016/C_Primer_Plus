#include <stdio.h>
#include <string.h>
/*
3.编写一个程序，读取一个浮点数，首先以小数点记数法打印，然后以
指数记数法打印。用下面的格式进行输出（系统不同，指数记数法显示的位
数可能不同）：
a.输入21.3或2.1e+001；
b.输入+21.290或2.129E+001；


4.编写一个程序，提示用户输入身高（单位：英寸）和姓名，然后以下
面的格式显示用户刚输入的信息：
Dabney, you are 6.208 feet tall
使用float类型，并用/作为除号。如果你愿意，可以要求用户以厘米为
单位输入身高，并以米为单位显示出来。

5.编写一个程序，提示用户输入以兆位每秒（Mb/s）为单位的下载速度
和以兆字节（MB）为单位的文件大小。程序中应计算文件的下载时间。注
意，这里1字节等于8位。使用float类型，并用/作为除号。该程序要以下面
的格式打印 3 个变量的值（下载速度、文件大小和下载时间），显示小数点
236
后面两位数字：
At 18.12 megabits per second, a file of 2.20 megabytes
downloads in 0.97 seconds.

*/


int pratice_4_2_main() {
	printf("* * * * * * * * * * * * * * * *\n");
	printf("- - - - - - - - - - - - - - - -\n");
	printf("this is pratice_4_2 % c\n", 7);
	printf("- - - - - - - - - - - - - - - -\n");
	printf("* * * * * * * * * * * * * * * *\n");
	// 练习 3
	/*float fnum;
	printf("plz enter a flaot num:\n");
	scanf("%f",&fnum);
	printf("Fisrt:%.1e--Second:%.1f\n", fnum, fnum);
	printf("Fisrt:%.3e--Second:%.3f\n", fnum, fnum);*/
	// 练习 4
	/*float height;
	printf("plz enter your height of feet:\n");
	scanf("%f",&height);
	printf("Dabney,you are %.3f feet tall!",height);*/

	// 练习 5
	float mbs;
	float filesize;
	float time;
	printf("plz enter your Download speed about mbs adb how big is the file:\n");
	scanf("%f",&mbs);
	scanf("%f",&filesize);
	time = filesize / mbs;
	printf("At %.2f megaits per second, a file of %.2f megabytes\ndownloads in %.2f seconds",
		mbs,filesize/8, time);


	/* * * * * * * * * 结论 * * * * * * * * *

	* * * * * * * * * 结论 * * * * * * * * */
	return 0;
}