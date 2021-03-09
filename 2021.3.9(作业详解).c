#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char str[] = "hello bit";
	printf("%d %d\n", sizeof(str), strlen(str));
	return 0;
}

sizeof(str)= 10 //空格一个 '\0'一个 所以10
strlen(str)=9   //空格一个 所以9



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
	Init(arr,sz);//把数组初始化为0
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

int main()
{
int arr[] = { 1,2,3,4,5 };
short* p = (short*)arr;
int i = 0;
for (i = 0;i < 4;i++)
{
	*(p + i) = 0;
}
for (i = 0;i < 5;i++)
{
	printf("%d ", arr[i]); //0 0 3 4 5
}
return 0;
}

int 数据类型大小是4 个字节；它的地址强制转换为short* 类型
当我们通过short* 解引用它就能访问2个字节 循环4次他能替换8个字节，就是int类型的两个元素



int main()
{
	int a = 0x11223344;
	char* pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a); //11223300 
	return 0;
}

int 类型大小是4个字节；0x11223344在内存中是倒着放的；char类型为2个字节大小；当通过* pc找到a的地址改变a的值是改变它前两个字节；而0x11223344是16进制的整数；它前两位就占用一个字节；所以是1122330




int i;//全局变量-不初始化-默认是0
int main()
{
	i--;
	-1
	10000000000000000000000000000001  //源码
	11111111111111111111111111111110  //反码
	11111111111111111111111111111111  //补码
	
	if (i > sizeof(i))   //i 也同为无符号数
     sizeof()-计算变量/类型所占内存的大小 >=0 无符号数
	{
		printf(">\n");

	}
	else
	{
		printf("<\n");
	}
	return 0;
}

int main()
{
	int a, b, c;
	a = 5;
	c = ++a;    //先++在赋值   a=6  c=6
	b = ++c, c++, ++a,a++;  //先算b=++c, c=7,b=7; 接着c++ ,c=8 ;++a , a=7; a++ 先赋值在加  所以b=7 a=8
	//a=8;b=7;c=8
	b += a++ + c;  //a先赋值 b=7+8+8=23  a+1=9
	printf("a = %d b =%d c=%d\n", a, b, c); //9 23 8

	return 0;
}