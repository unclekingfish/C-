#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


��ϰ3��
��n�Ľ׳ˡ��������������

int fac1(int x) //x=5
{
	int n = 0;
	int ret1 = 1;
	for (n = 1;n <=5; n++)  // 5*4*3*2*1=120
	for(n=1;n<=x;n++)
	{
		ret1 = n * ret1;  
		
	}
	return ret1;
}
 //fac(n)  --n<=1   1       ;--n>1  n*fac(n-1)
int fac2(int n)
{ 
	
	if(n <= 1)
	return 1;
	else 
	return n*fac2(n - 1);

	
}
int main()
{

	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fac2(n);
	
	printf("%d", ret);
	return 0;
}

��ϰ3��
��n��쳲��������������������

fib(n)   --n <= 2  1;     --n > 3  fib(n - 1) + fib(b - 2);

 1 1 2 3 5 8 13 21 34 55.....
int  count = 0;
int Fib(int x)
{
	//if (x == 3) //���Ե�����쳲��������ļ������
	//{
	//	count++;
	//}
	if (x <= 2)
		return 1;
	else 
		return Fib(x - 1) + Fib(x +-2);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("%d\n", ret);
	//printf("count=%d", count);
	return 0;
}

��һ�ַ�ʽ��

int Fib(int x)
{
	int a = 1;
	int b = 1;
	int c = 0;
	while (x > 2)
	{
		c = a + b;
		a = b;
		b = c;
		x--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("%d\n", ret);
	
	return 0;
}

�ݹ��������Ҫ������
�������������������������������ʱ���ݹ�㲻�ټ�����
ÿ�εݹ����֮��Խ��Խ�ӽ��������������

������������������������� Ҳ��ջ���
void test(int n)
{
	if (n < 10000)
	{
		test(n + 1);
	}
}
int main()
{
	test(1);

	return 0;

}