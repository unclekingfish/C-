#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
题目：写代码将三个数按大小输出
int main()
{
	int a = 5;
	int b = 4;
	int c = 3;
	if (a < b)
	{
		if (b < c)
		{
			
			printf("%d>%d>%d\n", c, b, a);
		}
		else if(b > c)
		{
			if (a< c)
			{
				printf("%d>%d>%d\n", b, c, a);
			}
			else if (a > c)
			{
				printf("%d>%d%>%d\n", b, a, c);
			}
			
		}
	}
	else if (a > b)
	{
		if (a > c)
		{
			if (b< c)
			{
				printf("%d>%d>%d\n", a, b, c);
			}
			else if (b > c)
			{
				printf("%d>%d%>%d\n", a, c, b);
			}
			
		}
		else if(c > a)
		{
			printf("%d>%d>%d\n", c, a, b);
		}

	}
	return 0;
}  errr

答案：
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int tem = a;
		a = b;
		b = tem;
	} //现在a里面存放着a与b的较大值,b存着最小值
	if (a < c)
	{
		int tem = a;
		a = c;
		c = tem;

	}//现在a存放这a与c的最大值，c存着最小值
	if (b < c)
	{
		int tem = b;
		b = c;
		c = tem;
	}//b存放着b与c的最大值，c存放着最小值
	printf("%d>%d>%d\n", a, b, c);
	return 0;
}

题目：写一个代码打印1-100之间所有3的倍数的数字

int main()
{
	int i = 1;
	int num = 0;
	while(i>=1)
	{
		num = 3 * i;
		
		printf("%d\n", num);
		i++;
		if (num >= 99)
		{
			break;
		}
	}

	return 0;
}

答案：
int main()
{
	int i;
		for (i = 1;i < 100;i++)
		{

			if (i % 3 == 0)
		
				printf("%d\n", i);
			
	}
	return 0;
}

题目：给定两个数，求这两个数的最大公约数。

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);

	c = a % b;
	c = a % c;
	if(c==0)
		printf("%d\n",c)
	return 0;
}err

/*答案*/：
 int  main()
{
	int m = 24;
	int n = 12;
	int r = 0;
	while (m % n)
	{
		r = m% n;
		m = n;
		n = r;
	}
	printf("%d", n);
	return 0;
}

辗转相除法

 int main()
 {
	 int m = 0;
	 int n = 0;
	 int r = 0;
	 scanf("%d%d", &m, &n);
	//while (m % n)
	 while(r=m%n)
	 {
		 //r = m % n;
		 m = n;
		 n = r;
	 }
	 printf("%d\n", n);
	 return 0;

 }

题目：打印1000年到2000年之间的闰年

int main()
{
	int m = 0;
	for (m = 1000;m <= 2000;m++)
	{
		if (m %4==0)
			printf("%d\n", m);
	}
	return 0;
}err

判断闰年的方法：
1.能被4整除并且不能被100整除的是闰年
2.能被400整除是闰年

这两个条件满足一条都是闰年，两者关系是或的关系

答案：
int main()
{
	int years = 0;
	int count = 0;
	for (years = 1000;years <= 2000;years++)
	{
		if (years % 4 == 0 && years % 100 != 0)
		{
			printf("%d ", years);
			count++;
		}
		else if (years % 400 == 0)
		{
			printf("%d ", years);
			count++;
		}
		
	}
	printf("\ count=%d\n", count);
	return 0;
}

int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000;year <= 2000;year++)
	{
		if (((year % 4 == 0) && (year%100 != 0)) || (year % 400 == 0))
		{
			printf("%d", year);
			count++;
		}
	}
	printf("\ count=%d", count);
	return 0;
}

题目：
打印素数，打印100-200之间的素数

int main()
{
	int a = 0;
	int count = 0;
	for (a = 100;a <= 200;a++)
	{
		if ((a % a == 0) && (a % 1 == 0))
		{
			printf("%d", a);
			count++;
		}
	}
	printf(" \count=%d", count);
	return 0;
} err

判断i是否为素数
素数判断的规则
1.试除法  产生2->i-1个数去除

int main()
{
	int num = 0;
	int count = 0;
	for (num = 100;num <= 200;num++)
	{
		int i = 0;
		for (i = 2;i < num;i++)
		{
			if (num % i == 0)
			{
				break;
			}
		}
		if (i == num)
		{
			printf(" %d", i);
			count++;
		}
	}
	printf("\ count=%d", count);
	return 0;
}

方法二：

int main()
{
	int i= 0;
	int count = 0;
	for (i = 100;i<= 200;i++)
	{
		int j = 0;
		for (j = 2;j<=sqrt(i);j++)

		// sqrt-开平方的数学库函数  需要引用<math.h>文件
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j>sqrt(i))
		{
			
			count++;
			printf(" %d", i);
		}
	}
	printf("\ count=%d", count);
	return 0;
}