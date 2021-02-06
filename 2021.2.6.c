#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//for语句的循环控制变量
//一些建议：
//1.不可以在for循环体内修改循环变量，防止for循环失去控制。
//example:
int main()
{
	int i = 0;
	for (i = 1;i < 10;i++)
	{

		if (i = 5) //这个i=5是 赋值的意思。i改成5
			printf("haha\n");
			printf("hehe\n");
	}


	return 0;

}


