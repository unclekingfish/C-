#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

дһ���������ز�����������1�ĸ���

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
	//дһ��������a�Ķ����ƣ����룩��ʾ�м���1
	int count=count_bit_one(a);  //a=-1
	//-1
	// 10000000000000000000000000000001 Դ��
	// 11111111111111111111111111111110 ����
	// 11111111111111111111111111111111 ����
	// 
	//13
	//00000000000000000000000000001101
	//
	printf("count =%d\n", count);
  system("pause");//system�⺯��-ִ��ϵͳ����-pause(��ͣ)
	return 0;
} // ��ͼa=-1 ��Ӧ�ô�ӡ32��1   ���ǽ����0 ����������벻��


�Ľ���

int count_bit_one( unsigned int n)  //�޷��Ż��Ϳ�����
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
	system("pause");//system�⺯��-ִ��ϵͳ����-pause(��ͣ)
	return 0;
}

����2��
int count_bit_one( int n)  
{
	int count = 0;
	int i = 0;
	for (i = 0;i< 32;i++)
	{
		if (((n >> i) & 1) == 1) //����һ��iλ �������001��λ�루ֻ����������1ʱ�ŵ���1�� 
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
	system("pause");//system�⺯��-ִ��ϵͳ����-pause(��ͣ)
	return 0;
}


����3��
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
	system("pause");//system�⺯��-ִ��ϵͳ����-pause(��ͣ)
	return 0;
}


���ʵ�֣�����int (32λ)����m��n�Ķ����Ʊ���У��ж��ٸ�λ��bit)��ͬ��

�����ӣ�
�������� 1999 2299   ������� 7


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
	//return count_bit_one(tmp); //�������д
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
��Ŀ��
��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

int print(int m)
{
	int i = 0;
	printf("����λ\n");
	for (i = 30;i>=0;i-= 2)
	{
		
		
		printf("%d ", (m>>i)&1);
	}
	printf("\n");
	printf("ż��λ\n");
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


��Ŀ��дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣 arr��һ������һά����
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
