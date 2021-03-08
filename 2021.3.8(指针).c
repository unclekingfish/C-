#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

指针：指针是变量，变量里面存的是内存单元地址（编号）


int main()
{
	int a = 10; //在内存中开辟一块空间
	int* p = &a;//这里我们对变量a,取出它的地址，可以使用&操作符
	           //将a的地址存放在p变量中，p就是一个指针变量。

	return 0;
}

总结：指针就是变量，用来存放地址变量。（存放在指针中的值都被当成地址处理）


指针和指针类型：

int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*)); 
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(double*));
	return 0;                             //结果都是4 个字节
}


指针为什么要区分类型？


int main()
{
	int a = 0x11223344;
	int* pa=&a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pa);
	//两个地址一模一样
	return 0;
}

int main()
{
	int a = 0x11223344;
	int* pa = &a;
	*pa = 0; //通过地址 把 a的值变成0

	
	return 0;
}

int main()
{
	int a = 0x11223344;
	char* pc = &a;
	*pc = 0;
	//内存里面的4 个字节，有一个字节变成了0

	return 0;
}

指针类型决定了指针进行解引用操作的时候，能够访问空间的大小

int* p;  *p能够访问4个字节
char* p;  *p能够访问1个字节
double* p; *p能够访问8个字节


指针+-整数

int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);  //008FF768  
	printf("%p\n", pa + 1);  //008FF76C   =008FF768 +4
	printf("%p\n", pc); //008FF768
	printf("%p\n", pc + 1); //008FF769  =008FF768 +1
	return 0;
}


指针类型决定了：指针走一步走多远（指针的步长）
int* p; p + 1-- > 4
char* p; p + 1-- > 1
double* p; p+1--> 8

int main()
{
	int arr[10] = { 0 };
	//int* p = arr;//数组名-首元素的地址
	char* p = arr;
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		*(p + 1) = 1;
	}
	return 0;
}

int main()
{
	int a;//局部变量不初始化，默认是随机值
	int* p; //局部的指针变量，就被初始化随机值
	*p = 20;
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0;i < 12;i++)
	{
		p++;
	}
	return 0;
}

test()
{
	int a = 10; //a的空间是0x0012ff44 存放10
	return &a;  //返回a的地址   
}   //函数一结束，空间就还给系统。0x0012ff44就不属于这个空间了
int main()
{
	int* p = test();  //p变量接受一个值 0x0012ff44 
	*p = 20;  //当你使用的时候，*p通过0x0012ff44地址找到的 位置，把20放进去会发现不是原来那个地址了
	return 0;
}