#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>

static:

void test()
{
    int a = 1;
	a++;
	printf("a=%d\n", a);
}

int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}

������
    ��Ϊi = 0 < 5, ִ��test�Զ��庯����a = 1 a = 1 + 1 = 2 ��ӡ���Ϊ2 �ֲ��������н���
	Ȼ��i++ i = 0 + 1 = 1;
    �ص�while i=1<5 ��ִ��test����  a=1(�ϴξֲ����������a��ֵû���ۼӣ� a++ = a+1=1+1=2 ��Ӧ���Ϊ2
	Ȼ��i++  i = 1+1+2 ��
	           .
		       .
		       .
    �Դ�ѭ�� ��ӡ���Ϊ 2 2 2 2 2


����static

void test()
{
	static int a = 1; //����static֮��a��һ����̬�ľֲ����� 
		a++;
		printf("%d\n", a);
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;

	}
	return 0;
}

������
    ��һ�ֻ��Ǻ�����һ����a = 2, ��ӡ���Ϊ2, i = 1
    Ȼ�� i = 1 < 5 ����test�����ľֲ���������ʱ�� a = 2����������һ�εĽ����int a = 1 ��ִ��
	ֱ�ӵ�a++ a = 2 + 1 = 3 ��ӡ���Ϊ3;
                     .
                     .
                     .
           ��ӡ���Ϊ 2  3  4  5  6

�ܽ᣺

1.static ���ξֲ�����
�ֲ��������������ڱ䳤

2.static ����ȫ�ֱ���
�ı��˱����������򡪡��þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ�ʹ��
����Դ�ļ����޷�ʹ�á�

���������½���һ���µ�.cԴ�ļ� ���ڵ�һ������ static int go_bal = 10;

�����ڱ�Դ�ļ������
int main()
{
	extern int go_bal; //��ʱ�����ʾ�޷��������ⲿ���� go_bal
	printf("%d\n", go_bal);
	return 0;
}

3.static ���κ���
�ı��˺�����������˵����׼ȷ��
�ı��˺�������������
���ⲿ��������->�ڲ���������

�ڹ������½�һ���µ�.cԴ�ļ�����һ��д��
static int add(int x, int y)
{
	int z = x + y;
	return z;

}


�����ڱ�Դ�ļ������
//�����ⲿ����
extern int add(int, int);
int main()
{

	int a = 23;
	int b = 22;
	int c = add(a, b);
	printf("c=%d\n", c);
	return 0;
}





#define �÷���
1.#define �����ʶ������
���ӣ�
#define MAX 19000
int main()
{
	int a = MAX;
	return 0;
}



2.#define ���Զ���ꡪ������
������ʵ��
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

//���ʵ��
#define MAX(X,Y)(X>Y?X:Y)

int main()
{
	int a = 23;
	int b = 44;
	//�����ķ�ʽ
	int max = Max(a, b);
	printf("max = %d\n", max);
	//��ķ�ʽ
	max = MAX(a, b);//max = (a>b?a:b)
	printf("max=%d\n", max);
	return 0;
}


�����£�

��ķ�ʽ

#define MAX(X,Y)(X>Y?X:Y)
int main()
{
	int a = 23;
	int b = 34;
	int c = MAX(a, b);
	printf("c=%d\n", c);
	return 0;
}

�����ķ�ʽ

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 354;
	int b = 345;
		int c = Max(a, b);
		printf("c=%d\n", c);
	return 0;
}