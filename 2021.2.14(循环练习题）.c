#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
��Ŀ��д���뽫����������С���
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

�𰸣�
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
	} //����a��������a��b�Ľϴ�ֵ,b������Сֵ
	if (a < c)
	{
		int tem = a;
		a = c;
		c = tem;

	}//����a�����a��c�����ֵ��c������Сֵ
	if (b < c)
	{
		int tem = b;
		b = c;
		c = tem;
	}//b�����b��c�����ֵ��c�������Сֵ
	printf("%d>%d>%d\n", a, b, c);
	return 0;
}

��Ŀ��дһ�������ӡ1-100֮������3�ı���������

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

�𰸣�
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

��Ŀ�����������������������������Լ����

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

/*��*/��
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

շת�����

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

��Ŀ����ӡ1000�굽2000��֮�������

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

�ж�����ķ�����
1.�ܱ�4�������Ҳ��ܱ�100������������
2.�ܱ�400����������

��������������һ���������꣬���߹�ϵ�ǻ�Ĺ�ϵ

�𰸣�
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

��Ŀ��
��ӡ��������ӡ100-200֮�������

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

�ж�i�Ƿ�Ϊ����
�����жϵĹ���
1.�Գ���  ����2->i-1����ȥ��

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

��������

int main()
{
	int i= 0;
	int count = 0;
	for (i = 100;i<= 200;i++)
	{
		int j = 0;
		for (j = 2;j<=sqrt(i);j++)

		// sqrt-��ƽ������ѧ�⺯��  ��Ҫ����<math.h>�ļ�
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