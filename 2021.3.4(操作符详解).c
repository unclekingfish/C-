#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
��д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ���
int main()
{
	int a = 0;
	int count = 0;
	scanf("%d", &a);
	while (1)
	{
		if (a % 2 == 1)
		{

			a = a / 2;
			count++;

		}
	}
	printf("%d", count);
	return 0;
}//err


int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num); //-1
	//ͳ��num�Ĳ����м���1
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}
	printf("%d\n", count);
	return 0;
} //num=-1ʱ����

int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	//num&1 ==1
	int i = 0;
	for (i = 0;i < 32;i++)
	{
		if (1 == ((num >> i) & 1))
			count++;
	}
	printf("%d\n", count);
	return 0;
}

int main()
{
	int a = 10;
	int* p = &a; //ȡ��ַ������
	*p=20; //�����ò�����
	return 0;
}



int main()
{
	int a = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 0 };
	//sizeof ����ı�����ռ�ڴ�ռ�Ĵ�С����λ���ֽ�
	printf("%d\n", sizeof a); //4
	printf("%d\n", sizeof(int)); //4
	printf("%d\n", sizeof(c));  //1
	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(p));  //4
	printf("%d\n", sizeof(char*));//4
	printf("%d\n", sizeof(arr)); //40
	printf("%d\n", sizeof(int [10])); //40
	printf("%d\n", sizeof(int[5])); //10
	return 0;
}



