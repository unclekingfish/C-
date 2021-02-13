#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>

int main()
{
	//字符结束标志是‘/0’
	//"abcd"是字符串
	//'\0' 是转义字符 --相对应的ASCII码值是 十进制数字 0；
	// 0 是数字
	//‘0’是 数字字符  --相对应的ASCII码值是 十进制数字 48；
	//'a’ 'v’ 是字母字符

	//EOF -end of file -文件结束标志 它本身的值是-1（负一）
	return 0;
}


求两个数的较大值

自己思考的：

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d",&a,&b);
	

	if (a < b)
	{
		printf("%d\n", b);

	}
	else
		printf("%d\n",a);
	return 0;
}


答案1：

int main()
{
	int a = 10;
	int b = 20;
	if (a > b)
		printf("较大值= %d\n", a);
	else
		printf("较大值 =%d\n", b);
	return 0;
}


int Max(int x,int y)
{
	if (x < y)
	return y;
	else
    return x;
}

int main()
{
	int a = 20;
	int b = 30;
	int max = Max(a, b);
	printf("较大值= %d\n", max);
	return 0;
}