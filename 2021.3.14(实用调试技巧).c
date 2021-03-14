#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	for(a=0;a<100;a++)
	{
		printf("%d ", a);
	}
	system("pause");
	return 0;
	
}


test.c          执行程序
Debug           Debug 版本的可执行程序         可以调试的，因为文件中包含了调试信息
Release         Release 版本的可执行程序

Debug版本程序文件比Release版本程序文件要大，因为其包含了调试信息，并且不做任何优化，以便于程序员调试程序

Release版本程序不能进行F10调试的

Relese成为发布版本 他往往进行了各种优化，使得程序在代码在大小和运行速度上都是最优的,以便用户很好地使用。
测试员 一般测试的是Release版本




int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0;i <= 12;i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	system("pause");
	return 0;
}

上面这个代码 当是Debug版本时执行会死循环  而如果是Release 版本时则没问题打印了12个hehe




调试快捷键：
F5-启动调试-和F9配合使用的
红点-断点 F9切换断点
int main()
{
	int i = 0;
	for(i=0;i<100;i++)
	{
		printf("%d ", i);
	}
	for (i = 0;i < 100;i++)
	{
		printf("%d ", 10-i);
	}
	
	return 0;
	
}