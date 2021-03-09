#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char str[] = "hello bit";
	printf("%d %d\n", sizeof(str), strlen(str));
	return 0;
}

//sizeof(str)= 10 //空格一个 '\0'一个 所以10
//strlen(str)=9   //空格一个 所以9



给出以下定义：
char acX[] = "abcdefg";
char acY[] = { 'a','b','c','d','e','f','g' };
以下说法正确的是( C )
A.数组acX和数组acY等价
B.数组acX和数组acY长度相同
C.数组acX的长度大于数组acY的长度
D.数组acX的长度小于数组acY的长度

解析：acX还有个'\0'


创建一个整形数组，完成对数组的操作
1.实现函数init()初始化数组为全0
2.实现print()打印数组的每个元素
3.实现reverse()函数完成数组元素的逆置
要求：自己设计以上函数的参数，返回值

void Init(int arr[] ,int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		arr[i] = 0;
	
	}
}
void Print(int arr[],int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while(left<right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--; //这里我写成了++？？？
	}
		
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//Init(arr,sz);//把数组初始化为0
	Print(arr,sz);//打印
	Reverse(arr,sz);
	Print(arr, sz);//打印
	return 0;
}


题目：将数组A中的内容和B数组中的内容进行交换。(数组一样大)


int main()
{
	int A[5] = { 1,2,3,4,5 };
	int B[5] = { 6,7,8,9,0 };
	int tmp = 0;
	int i = 0;
	int sz = sizeof(A) / sizeof(A[0]);
	for (i = 0;i < sz;i++)
	{
		tmp = A[i];
		A[i] = B[i];
		B[i] = tmp;

	}
	return 0;
}