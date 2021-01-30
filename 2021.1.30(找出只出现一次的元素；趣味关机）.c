#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>//system

找出只出现一次的数
题面：给定一个非空整形数组，除了某个元素只出现一次除外，其余每个元素均出现两次，找出那个只出现一次的元素。
样例：int a[] = { 1,2,3,4,5,1,2,3,4 }，该数组中只有5出现一次，其他数字都是成对，找出5

暴力版
int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	//找出单生狗
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr)[0]; //arr变量的总整形大小除以arr单个元素的大小=数组的元素个数
	/*printf("%d", sz);*/
	for (i = 0;i < sz;i++)
	{
		//统计arr[i]在arr数组出现了几次
		int count = 0;
		int j = 0;
		for (j = 0;j < sz;j++)
		{
			if (arr[i] == arr[j])
				{
				count++;
			   }
		}
		if (count == 1)
	{
	    printf("单身狗：%d\n", arr[i]);
		break;
}
		}
	
	return 0;
}

进阶版

3^3=0
5^5=0
a^a=0
0^5=5
0^3=3
0^a=a
3^5^3=5
3^3^5=5
异或（相同为0，不同为1），是满足交换率的

int main()
{
	1 1 2 2 3 3 4 4 5
	1^1^2^2^3^3^4^4^5
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	int i = 0;
	int ret=0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	for (i = 0;i<sz;i++)
	{
		ret = ret^arr[i];

	}
	printf("%d\n", ret);

	return 0;
}




int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 180");
	again:
	printf("电脑将会在3分中内关机，除非请打出“我是你爸爸”电脑才会取消关机");
		scanf("%s", arr);
		if (strcmp(arr,"我是你爸爸")==0)//strcmp -—string compare
		{
			system("shutdown -a");
		}
		else 
        {
			goto again;
		}
	return 0;
}



int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 120");// 不是- s 是-s; -t同理；
	again:
	printf("快打“我是猪”不然就关你电脑");
	scanf("%s",arr);
		if (strcmp(arr,"我是猪")==0)
		{
			system("shutdown -a");

	}
		else
		{
			goto again;
		}
	return 0;
}