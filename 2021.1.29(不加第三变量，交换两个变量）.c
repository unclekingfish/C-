#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<limits.h>

//题目：假设a = 2;b = 3;不增加第三个变量的情况下，交换a, b的值.


//假如增加第三个变量的情况下，交换a,b的值。

int main()
{
	int a = 2;
	int b = 3;
	int c = 0;
	c=a;//2
	a = b;//3
	b = c;//2

	printf("%d\n",a);
	printf("%d\n",b);
	return 0;
}


//如果不增加第三个变量的话，交换a，b的值

int main()
{
	int a = 2;
	int b = 3;
	a = a + b;//a得到原来a和b的和 也就是 5；b还是原来的b;
	b = a - b;//b得到最新的a(也就是原来a和b的5）和 原来的b的差 也就是2
	a = a - b;//a得到最新的a(5) 和 最新的b（2) 的差 也就是3 
   
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}


//上面的方法可行，但是没有考虑整形溢出这个问题
//int 整形数组它的大小是4个字节相当于32个比特
//int 但是有可以存储的最大值 
//INT_MAX  //引用<limits.h>文件后 ，选择INT_MAX右键鼠标再选速览定义可以找到int 整形数组能输入的最大十进制数 2147483647
//一般来说像第二种方法它如果相加的数没有超过int 最大值还行，但是万一超过了怎么办？



//第三种方法：异或（^) 两个值相同为0，不同为1；
//使用异或不会溢出，没有使用第三个变量
//异或又称半加，意为不进位的加法

int main()
{
	int a = 2;//二进制是 010
	int b = 3;//二进制是 011
	a = a ^ b;//a^b = 001 = a(new)
	b = a ^ b;//a(new)^b= 010 =b(new)
	a = a ^ b;//a(new)^b(new)= 011 =a(new1) 
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}
//
//与：只有两个数都为1，结果才为1，其余都是0；
//或：只要其中一个数为1，结果为1，其他都是0；
//非：0非为1；1非为0；
//异或：相同的两个数为0，不同两个数为1；