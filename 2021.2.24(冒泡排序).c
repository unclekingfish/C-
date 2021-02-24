#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
数组作为函数参数
冒泡排序
10 9 8 7 6 5 4 3 2 1 //两两相邻数组元素的排列
9 10 8 7 6 5 4 3 2 1
9 8 10 7 6 5 4 3 2 1       一趟冒泡排序
9 8 7 10 6 5 4 3 2 1
...
9 8 7 6 5 4 3 2 1 10                                  


8 9 7 6 5 4 3 2 1 10       
8 7 9 6 5 4 3 2 1 10        二趟冒泡排序
....
8 7 6 5 4 3 2 1 9 10

10个元素   n 
9趟冒泡排序  n-1

void bubble_sort(int arr[] ,int sz)
{
	//确定冒牌排序的躺输
	int i = 0;
	 //假设sz=10 
	
	for (i = 0;i < sz - 1;i++)
	{
		//每一趟冒泡程序
		int j = 0;
		int flag = 1; //假设这一趟要排序的数据已经有序
		for (j = 0;j <sz-1-i ;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟排序的数据其实不完全有序
			}

		}
		if(flag == 1)
		{
			break;//这个break 还是是在for循环里面，它打断的也是for的循环
		}
	}


}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序，排成升序
	//arr是数组，我们对数组arr进行传参，实际传递过去的是数组arr首元素的地址 &arr[0]
	bubble_sort(arr ,sz);//冒泡排序函数
	for(i=0;i<sz-1;i++)
	{ 
		printf("%d ",arr[i]);
		}
	return 0;

}



int main()
{
	if (1)
		break;     // break语句只用与for和swich，在if语句中不能使用，因为if 不是循环语句，不能用break来结束
  
	return 0;
}


数组名是什么?  首元素的地址（两个例外）
int main()
{
	int  arr[] = { 1,2,3,4,5,6,7 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);  //两个结果一样
	printf("%d\n", *arr);  //结果是1
	return 0;
}



int main()
{
	int  arr[] = { 1,2,3,4,5,6,7 };
	printf("%p\n", arr);  //012FFB10  首元素地址
	printf("%p\n", arr+1);  //012FFB14  首元素地址+4
	printf("%p\n", &arr[0]); //012FFB10  首元素地址
	printf("%p\n", &arr[0]+1);//012FFB14  首元素地址+4
	printf("%p\n", &arr);  //012FFB10    是整个数组的地址
	printf("%p\n", &arr+1);// 012FFB2C   对比上面的地址 这个=+28   7个元素
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//例外：
	//1.sizeof（数组名） - 数组名表示整个数组，sizeof（数组名）计算的是整个数组的大小，单位是字节
	//2. &数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
	return 0;
}
