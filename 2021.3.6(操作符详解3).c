#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	short s = 0;  //short 短整型字符长度是2b
	int a = 10; 
	printf("%d\n", sizeof(s = a + 5)); //2
	printf("%d\n", s); //sizeof 计算的结果不会存储 ，s=0
	return 0;
}

int main()
{
	int a = 0;
	// ~按（2进制）位取反
	//00000000000000000000000000000000
	//11111111111111111111111111111111   -补码
	//11111111111111111111111111111110   -反码
	//10000000000000000000000000000001   -源码
	//-1
	printf("%d\n", ~a);
	return 0;
}

int main()
{
	int a = 11;
	a= a | (1 << 2);
	printf("%d\n", a);  //15
	a=a & (~(1 << 2));
	printf("%d\n", a);   //11
	//00000000000000000000000000001011
	//00000000000000000000000000000100
	// 1<<2;
	//00000000000000000000000000000001
	// 
	//00000000000000000000000000001111   
	//11111111111111111111111111111011    //按位与
	//00000000000000000000000000000100 
	//00000000000000000000000000001011


	return 0;
}

int main()
{
	int a = 10;
	//printf("%d\n", ++a);  //前置++，先++，后使用
	printf("%d\n", a++); //后置++，先使用，再++
	return 0;
}


int main()
{
	int a = (int)3.14;  //int a=int (3.14) //err
	return 0;
}

void test1(int arr[])   //数组进行传参，传的是首字母的地址 地址大小是4/8个字节大小
{
	printf("%d\n", sizeof(arr));

}
void test2(char ch[])  //同理传的是首元素的地址 ，只要是地址那大小就是4 （32位）或者8（64位）
{
	printf("%d\n", sizeof(ch));
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));  //int类型大小是4 10个元素就是 40个字节大小
	printf("%d\n", sizeof(ch));// char 类型大小是1  10个元素就是 10个字节大小
	test1(arr);
	test2(ch);
		return 0;
}

int main()
{
	int a = 3;
	int b = 5;
	int c = a && b;   // 逻辑与，只有两个为真，则为真
	printf("%d\n", c);   //1
	c = a || b;
	printf("%d\n", c);
	return 0;
}

int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;  // a++ && ++b   a先使用a=0  只要左边有一个为假 0，右边不管什么都为假 所以后面都不算。但是a是算了，那么a自增1
 	//i = a++ || ++b || d++;
	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d); //1 2 3 4
	return 0;
}



int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;  //  a && ++b b=3 1&&3 =1 a++=2 ; 1 && d++  1 && 4 =1 d++=5;
	//i = a++ || ++b || d++;
	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d); //2 3 3 5
	return 0;
}

int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	 
     i = a++ || ++b || d++;  //逻辑或 只要前面为第一个为真，那么后面的都不用算  a=1  为真，后面的b d不用算  但是a用完后还要++ a=2
	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d); //  2 2 3 4
	return 0;
}

条件操作符 exp1 : exp2:exp3

int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	if (a > b)
		max = a;
	else
		max = b;


	max = (a > b ? a : b);
	/*int a = 0;
	int b = 0;
	if (a > 5)
		b = 3;
	else
		b = -3;

	b = (a > 5 ? 3 : -3;)*/
	return 0;
}