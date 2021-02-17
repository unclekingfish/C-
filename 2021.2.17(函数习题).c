#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
题目：实现两个整数互换

int main()
{
	int a = 20;
	int* pa = &a;
	*pa = 22;
	printf("%d", a);
	return 0;
}


void Swap(int* x, int* y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int a = 12;
	int b = 65;
	 Swap(&a , &b);
	printf("a=%d\nb=%d", a, b);
	return 0;
}

实际参数（实参）：真实传给函数的参数, 叫实参。实参可以是：常量，变量，表达式，函数等。
无论实参是何种类型的量，在进行函数调用时，他们都必须有确定的值，以便把这些值传给形参。

形式参数（形参）：是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中才实例化（分配内存单元），所以叫形式参数。
形式参数当函数调用完成后就自动销毁了。因此形式参数只在函数中有效。

函数的调用 ：
传值调用： 函数的形参和实参分贝占有不同的内存块，对形参的修改不会影响实参。
传址调用： 传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量。



练习：
1.写一个函数可以判断一个数是不是素数。

void sushu(int i)
{
    int j = 0;
    for (j = 1;j <=i ;j++)
    {
        if ((i / j == 0) && (i == j))
            return j;
    }
}
int main()
{
    int a = 0;
    scanf("%d", &a);
    sushu(a);
    printf("这个数是素数 %d", a);
    return 0;
}err

答案；
int is_prime(int n)
{
	int y = 0;
	for (y = 2;y <n;y++)
	{
		if(n%y ==0)
		return 0;
	}
	return 1;
}
int main()
{
	//打印100-200之间的素数
	int i = 0;
	for (i = 100;i <= 200;i++)
	{
		//判断是否为素数
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}