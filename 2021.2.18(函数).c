#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int is_prime(int x)
{
	//
	int y = 0;
	for (y = 2;y <= sqrt(x);y++)   //产生2-n的数组去%y
	{
		if(x%y==0)
		return 0;
	}
	//if(y==x)  多此一举
	return 1;
}
int main()
{
	//求100—200之间的素数
	int a = 0;
	for (a = 100;a <= 200; a++)
	{
		
		if (is_prime(a) == 1)
			printf("%d ", a);
	}
	
	return 0;
}


 2.写一个函数判断一年是不是闰年
自己做：

int is_leap_year(int a)
{
	//if ((a % 4) == 0 && (a % 100) == 0) err  
	if (a % 4 == 0 && a % 100 != 0)
	{
		return 1;
	}
	else if  (a % 400 == 0)
	{
		return 1;
	}
	else
		return 0;
}

int main()
{
	//答应1000 - 2000之间的闰年
		int year = 0;
	for (year = 1000;year <= 2000;year++)
	{
		//判断year是否为闰年
		if (is_leap_year(year) == 1)
		{
			printf("%d  ", year);
		}
	}
	return 0;
}



int is_leap_year(int a)
{
	if (((a % 4) == 0 && (a % 100) != 0) || (a % 400 == 0))
	{
		return 1;
	}
	else
		return 0;
}


int main()
{
	//答应1000-2000之间的闰年
	int year = 0;
	for (year = 1000;year <= 2000;year++)
	{
		//判断year是否为闰年
		if (is_leap_year(year) == 1)
		{
			printf("%d  ", year);
		}
	}
	return 0;
}


3.写一个函数，实现一个整形有序数组的二分查找。

   在一个有序数组中查找具体的某个数
  如果找到了返回，这个数的下标。找不到的返回-1
 自己做
int search_number(int x, int y)
{
	
	int i = 0;
	int left = 0;
	int mid = 0;
	int sz = x / x[0];
	int right = sz - 1;
	
	for (i = 0;i < sz;i++)
	{
		mid = (right + left) / 2;

		if (x[mid] > x)
		{
			right = mid - 1;

		}
		else if (x[mid] < x)
		{
			left = mid + 1;
		}
		else if (x[mid] == x)
		{
			mid = y;
			return y;
			
		}
	}
}
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10,11 };
	int b = 7;
	int c = 0;
	search_number(b,c);
	printf("该数在数组的下标为 %d\n", c);

	return 0;
}err



//答案：
int binary_search(int x[] ,int y ,int sz)  // int x err /int x[]表示数组
{
	int left = 0;
	
	//int sz = sizeof x / sizeof x[0];  //记住是sizeof 求大小
    //x[] main里面的数组在进行传送到函数里面后，不会表示全部数组，而是数组的第一个数值（在这题中也说就是1）
	//x[0] 在main数组代进去后就是1,  1/1=1  int sz=1;
	int right = sz - 1;
	
	while (left <=right)
	{
		int mid = (left + right) / 2;
		if (x[mid] > y)

		{
			right = mid - 1;
		}
		else if (x[mid] < y)
		{
			left = mid + 1;
		}
		else 
		{
			return mid;
		}
	}
	return -1;
}
int main()

{
	//在一个有序数组中查找具体的某个数
	//如果找打了返回，这个数的下标。找不到返回-1
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
	int a = 7;
	int sz = sizeof arr / sizeof arr[0]; //放这里就不会发生sz=1的情况
	int set = binary_search(arr, a ,sz);
	                                     //传递过去的是数组arr首元素的地址。
	if (set == -1)
		printf("找不到这个数\n");
	else
		printf("这个数的下标是%d", set);

		return 0;


}