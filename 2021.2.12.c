#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

for 的练习
2.计算1！+2！+3！+....+10!

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

最简洁的答案：

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

练习3
3.在一个有序数组中查找具体阿德某个数字n。编写int binsearch(int x, int v[], int n);
功能：在v[0] <= v[1] <= [2] <= ... <= v[n-1]的数组中查找x。

自己做：假设数组是0到9，找到7
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
			printf("找到了 %d\n",i);
			break;
		}
	}
		if (i == sz)
			printf("没有找到");
		
	return 0;

}

折半查找法\二分查找法 ：通过第一个下标数和最后一个下表数相加再除以二得到的商（有余数省略余数也可以）
判断这个中间数对比需要查找的值是大了还是小了，如果是大了则取左边的最左下标数和中间值取左边区的中间值.....]
这样下去就能找到需要查找的值。

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
			printf("找到了,下标是 =%d\n", mid);
			break;
		}

	}
	if (left > right)
	{
		printf("找不到");
	}
	return 0;
}


