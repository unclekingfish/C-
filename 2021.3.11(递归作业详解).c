#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


关于递归的描述错误的是（C ）
A.存在限制条件，当满足这个限制条件的时候，递归便不再继续
B.每次递归调用之后越来越接近这个限制条件
C.递归可以无限递归下去
D.递归层次太深，会出现栈溢出


实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
如：输入9，输出9*9口诀表。输入12，输出12*12的乘法口诀表

void print_table(int n)
{
	int i = 0;
	for (i = 1;i <= n;i++)
	{
		int j = 0;
		for (j = 1;j <= i;j++)
		{
			printf("%d*%d=%-3d ", i, j, i * j);

		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	return 0;
}

题目：编写一个函数 reverse_string(char* strong)(递归实现)

实现：将参数字符串中的字符反向排列
要求：不能使用c函数库中的字符串操作函数

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')

	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char arr[])
{
	
	int left = 0;
	int right =my_strlen(arr)-1;
	
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}

}
int main()
{
	char arr[] = "abcdef";//fedcba
	reverse_string(arr);
	printf("%s\n", arr);

	return 0;
}

递归方法： 
逆序：a b c d e f 
1.a和f的交换
2.逆序 resever_string("b c d e")

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')

	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char* arr)
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if(strlen(arr+1)>=2)
	reverse_string(arr + 1);
	arr[len - 1] = tmp;
}
int main()
{
	char arr[] = "abcdef";//fedcba
	reverse_string(arr);
	printf("%s\n", arr);

	return 0;
}

写一个递归函数DigitSum(n) ,输入一个非负整数，返回组成它的数字之和
例如：调用DigitSum(1729),则应该返回1+7+2+9 ,它的和是19
输入1729  输出19
DigitSum(1729)
DigitSum(172)+1729%10
DigitSum(17)+172%10+1729%10
DigitSum(1)+17%10+...
1+7+2+9
 
 
int DigitSum(unsigned int num)
{
	
	if (num > 9)
	{
		return  DigitSum(num / 10) + num % 10;
	}  
	return num;
}
int main()
{
	unsigned int num = 0;

	scanf("%d", &num);//1729
	int ret = DigitSum(num);
	printf("ret =%d\n", ret);

	return 0;
}


题目：编写一个函数实现n的k次方，使用递归实现
double Pow(int n, int k)
{
	//n^k=n* n^(k-1)
	if (k < 0)
		return (1.0 / (Pow(n, -k)));
	if (k <= 0)
		return 1;
	else
		return n * Pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("ret=%lf\n", ret);
	return 0;
}