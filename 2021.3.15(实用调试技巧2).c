#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	printf("hehe\n");
	int a = 20;
	int b = 10;
	int c = Add(a, b);

	return 0;
}

shift+F11  不想观察时跳出逐语句
shift+F9   快速监视
shift+F5   停止监视


int main()
{
	{
		int tmp = 0;
		printf("tmp=%d\n", tmp);
	}
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		arr[i] = i;
	}
	return 0;
}

vs2019  调试选项：
窗口选项;
自动窗口：自动把程序执行到某个位置的上下文记录的某些变量 （自动会增减数据）
局部变量：和自动窗口差不多，当我们进入函数内部的时候会自动加减数据    但是不能自己加数据自己观察
监视： 自己手动加减需要监视的变量
内存： 手动添加需要观察的数据内存信息
寄存器：观察寄存器的数据变化

调用堆栈：像堆木头一样，先进后出，后进先出
下面函数，当程序执行到test时 最下面会显示文件名.exe!main(...)
然后进入滴个test()函数时，调用堆栈第二行会显示文件名.exe!test(...)
以此类推，最后则是文件名.exe!test2(...);而当函数test2(...)执行完出去，
调用堆栈最上面的文件名.exe!test2(...)会消失 ，以此类推，执行完所有则最后的main行消失
void test2()
{
	printf("hehe\n");
}
void test1()
{
	test2();
}
void test()
{
	test1();
}
int main()
{
	test();
	return 0;
}


//记住：要实现上面的调试窗口选项，要先按F10进入调试

利用调试测试代码：
int  main()
{
	int i = 0;
	int sum = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		int j = 0;
		for (j = 1;j <= i;j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}


如果一步一步调试比较挫；可以利用断点 ，添加断点，然后右击断点选择"条件"，在下面加上"i==3"



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