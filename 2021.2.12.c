#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

for ����ϰ
2.����1��+2��+3��+....+10!

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;

	for (a = 1;a <= 3;a++)
	{
		int ret = 1;
		for (b = 1;b <=a;b++)
		{
			ret *= b;
		}
		sum +=ret;
	}
	printf("%d\n", sum);
	return 0;
}

����Ĵ𰸣�

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	int ret = 1;
	for (a = 1;a <= 3;a++)
	{
		ret *= a;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}

��ϰ3
3.��һ�����������в��Ҿ��尢��ĳ������n����дint binsearch(int x, int v[], int n);
���ܣ���v[0] <= v[1] <= [2] <= ... <= v[n-1]�������в���x��

�Լ���������������0��9���ҵ�7
int main()
{
	int i = 0;
	int k = 79;
	int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(a)/sizeof (a[0]);
	for (i = 0;i < sz;i++)
	{
		if (k == a[i])
		{
			printf("�ҵ��� %d\n",i);
			break;
		}
	}
		if (i == sz)
			printf("û���ҵ�");
		
	return 0;

}

�۰���ҷ�\���ֲ��ҷ� ��ͨ����һ���±��������һ���±�������ٳ��Զ��õ����̣�������ʡ������Ҳ���ԣ�
�ж�����м����Ա���Ҫ���ҵ�ֵ�Ǵ��˻���С�ˣ�����Ǵ�����ȡ��ߵ������±������м�ֵȡ��������м�ֵ.....]
������ȥ�����ҵ���Ҫ���ҵ�ֵ��

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(a) / sizeof(a[0]);
	int right = sz - 1;
	int left = 0;
	int b = 7;
	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (a[mid] < b)
		{
			left = mid+1;
		}
		else if (a[mid] > b)
		{
			right = mid-1;
		}
		else
		{
			printf("�ҵ���,�±��� =%d\n", mid);
			break;
		}

	}
	if (left > right)
	{
		printf("�Ҳ���");
	}
	return 0;
}


