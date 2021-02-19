#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//练习：
//4.写一个函数，每调用一次这个函数，就会将num的值增加1

int Add(int* p) 
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n",num);
	Add(&num);
	printf("%d\n", num);
	return 0;
}

