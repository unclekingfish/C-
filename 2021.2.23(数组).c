#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


一维数组的创建和初始化：

数组是一组相同类型元素的集合。
创建方式：

type_t   arr_name[const_n];
//type_t 实质数组的元素类型
//const_n 是一个常量表达式，用来指数组的大小。


int main()
{
    //创建一个数组-存放整形-10个
	int arr[10];
	char arr2[5]
		//创建一个数组-存放字符-5个
		int a = 5;
	char ch[a]; //err   const_n为常量表达式
	return 0;
}

数组的初始化：
在创建数组的同时给数组的内容一些合理初始值（初始化）。

int main()
{
	int arr[10] = { 1,2,3 }; //不完全初始化，剩下的元素默认初始化为0
	char arr2[5] = { 'a','b' };
	char arr2[5] = { 'a',98 }; //结果和上面的arr2数组一样
	char arr3[5] = "ab";//ok
	char arr4[] = "abcdef"; //arr4 里面放着 a b c d e f 0
	printf("%d", sizeof(arr4)); //7  size -算\0
	//sizeof 计算 arr4所占空间的大小
	//7个元素-char 7*1 =7
	printf("%d", strlen(arr4));//6  strlen -不计算\0
	//strlen 求字符串的长度-'\0'之前的字符个数
	//[a b c d e f \0]
	return 0;
}

1.strlen 和 sizeof 没什么关联
2.strlen 是求字符串长度的-只能针对字符串求长度-库函数-使用得引用头文件<string.h>
3.sizeof 计算变量,数组，类型的大小—单位是字节—操作符


int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr1));//4    占用4个字节的大小
	printf("%d\n", sizeof(arr2));//3    占用3个字符的大小
	printf("%d\n", strlen(arr1));//3    '\0'之前的字符长度
	printf("%d\n", strlen(arr2));//15   arr2 没有\0 当它找到\0时才结束 。所以是随机值
	return 0;
}

arr1   a b c \0

arr2   a b c  


一堆数组的使用

int main()
{
	char arr[] = "abcdef"; //[a] [b] [c] [d] [e] [f] [\0]
	printf("%c\n", arr[3]);
	int i = 0;
	for (i = 0;i < 6;i++)
	{
		printf("%c", arr[i]);
	}
	for (i = 0;i <(int)strlen(arr);i++)  
	{
		printf("\n%c", arr[i]);
	}
	int len = strlen(arr);
	for (i = 0;i < len;i++)
	{
		printf("%c ", arr[i]);
	}
	return 0;
}


int  main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

int  main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("&arr[%d] =%p\n", i, &arr[i]);
	}
}

& arr[0] = 005AFD70    
& arr[1] = 005AFD74   //相差4
& arr[2] = 005AFD78   //相差4
& arr[3] = 005AFD7C   //16进制 c就是12  还是相差4
& arr[4] = 005AFD80   //相差4
& arr[5] = 005AFD84      .
& arr[6] = 005AFD88      .
& arr[7] = 005AFD8C      .
& arr[8] = 005AFD90      .
& arr[9] = 005AFD94      .

！数组在内存中是连续存放的！ 低地址————>高地址

int main()
{
	int arr[3][4] = {1,2,3,4,5 }; //3行4列  第一行放1 2 3 4 ，第二行是5 0 0 0  ，第三行是0 0 0 0 
	//如何把123放第一行，45放第二行
	int arr1[3][4] = { {1,2,3},{4,5} };   //第一行放 1 2 3 0 ；第二行放 4 5 0 0 ；第三行放0 0 0 0 
	//int arr[] = { 1,2,3,4 };
	//int arr2[][] = { { 1,2,3,4 },{ 5, 6, 7, 8 } };//err arr2缺乏下标
	int arr2[3][4]={ { 1,2,3,4 },{ 5, 6, 7, 8 } };
	int arr3[3][] = { { 1,2,3,4 },{ 5, 6, 7, 8 } };// err arr3缺乏下标 列是绝对不能省略的
	int arr4[][4] = { { 1,2,3,4 },{ 5, 6, 7, 8 } };  //ok //行是可以省略，列是不能省略的
	char ch[5][6]; 
}


int main()
{
	int arr[3][4] = { { 1,2,3 }, { 4,5 } };
	//1 2 3 0
	//4 5 0 0
	//0 0 0 0
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		int j = 0;
		for (j = 0;j < 4;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

//二维数组在内存中的存储

int main()
{
	int arr[3][4] = { { 1,2,3 }, { 4,5 } };

	int i = 0;
	for (i = 0;i < 3;i++)
	{
		int j = 0;
		for (j = 0;j < 4;j++)
		{
			printf("&arr[%d][%d]%p\n ",i,j, &arr[i][j]);
		}
		
	}

	return 0;
}

& arr[0][0]004FF8B4     第一行
& arr[0][1]004FF8B8    
& arr[0][2]004FF8BC
& arr[0][3]004FF8C0
 
& arr[1][0]004FF8C4     第二行
& arr[1][1]004FF8C8
& arr[1][2]004FF8CC
& arr[1][3]004FF8D0

& arr[2][0]004FF8D4     第三行
& arr[2][1]004FF8D8
& arr[2][2]004FF8DC
& arr[2][3]004FF8E0
 
不是像盒子那样排列的，而是连续像一条线那样排列

&arr[0][0]004FF8B4  &arr[0][1]004FF8B8  &arr[0][2]004FF8BC  &arr[0][3]004FF8C0  &arr[1][0]004FF8C4 ..... &arr[2][3]004FF8E0


        int arr[3][4]
---------------------------->
 arr[0]     arr[1]     arr[2]
□□□□   □□□□   □□□□
arr[0][j]  arr[1][j]  arr[2][j]