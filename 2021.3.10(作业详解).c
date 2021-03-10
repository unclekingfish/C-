#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

写一个函数返回参数二进制中1的个数

int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	//写一个函数求a的二进制（补码）表示有几个1
	int count=count_bit_one(a);  //a=-1
	//-1
	// 10000000000000000000000000000001 源码
	// 11111111111111111111111111111110 反码
	// 11111111111111111111111111111111 补码
	// 
	//13
	//00000000000000000000000000001101
	//
	printf("count =%d\n", count);
  system("pause");//system库函数-执行系统命令-pause(暂停)
	return 0;
} // 如图a=-1 ，应该打印32个1   可是结果是0 所以这个代码不行


改进：

int count_bit_one( unsigned int n)  //无符号化就可以了
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);

	int count = count_bit_one(a);  

	printf("count =%d\n", count);
	system("pause");//system库函数-执行系统命令-pause(暂停)
	return 0;
}

方法2：
int count_bit_one( int n)  
{
	int count = 0;
	int i = 0;
	for (i = 0;i< 32;i++)
	{
		if (((n >> i) & 1) == 1) //右移一个i位 与二进制001按位与（只有两个都是1时才等于1） 
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);

	int count = count_bit_one(a);  

	printf("count =%d\n", count);
	system("pause");//system库函数-执行系统命令-pause(暂停)
	return 0;
}


方法3：
int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
//n=n&(n-1)
//n
//13
//1101 n
//1100 n-1
//1100 n
//1011 n-1
//1000 n
//0111 n-1
//0000 n

int main()
{
	int a = 0;
	scanf("%d", &a);

	int count = count_bit_one(a);

	printf("count =%d\n", count);
	system("pause");//system库函数-执行系统命令-pause(暂停)
	return 0;
}


编程实现：两个int (32位)整数m和n的二进制表达中，有多少个位（bit)不同？

举例子：
输入例子 1999 2299   输出例子 7


int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int get_diff_bit(int m, int n)
{
	int tmp = m ^ n;
	int count = 0;
	//return count_bit_one(tmp); //如果不想写
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int count=get_diff_bit(m, n);
	printf("count=%d\n", count);
	return 0;

}
题目：
获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

int print(int m)
{
	int i = 0;
	printf("奇数位\n");
	for (i = 30;i>=0;i-= 2)
	{
		
		
		printf("%d ", (m>>i)&1);
	}
	printf("\n");
	printf("偶数位\n");
	for (i = 31;i >= 1;i -= 2)
	{


		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int m = 0;
	scanf("%d", &m);
	print(m);
	return 0;
}


题目；写一个函数打印arr数组的内容，不使用数组下标，使用指针。 arr是一个整形一维数组
void print(int* p, int sz)
{
	int i = 0;
	for ( i = 0; i <sz ; i++)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	return 0;
}
