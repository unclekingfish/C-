#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

前面用过函数的例子
Add(int x, int y)
{
	int z = 0;
	z = x + y;
		return z;
}
int main()
{
	int a = 100;
	int b = 20;
	int z = Add(a, b);
	printf("%d\n", z);
	return 0;
}


查询库函数的用法 在网站：www.cplusplus.com 

举例：strcpy-string copy :   char * strcpy ( char * destination, const char * source ); <string.h>

int main()
{
	char a[] = "我爱你";
	char b[20]="我爱你，爱你，爱你"; 
	strcpy(b, a);
	printf("%s", b); //为什么后面“的，爱你，爱你”没有打印   因为a 的"我爱你" 其实是"我爱你\0",后面有个结束字符。打印时，一遇到"\0"就没打印下去了。
	return 0;
}

举例2：momset - momery set; void* memset(void* ptr, int value, size_t num);<striing.h>

int main()
{
	char a[20] = "hello world!";
	memset(a, '_', 2);
	printf("%s", a);
	return 0;

}

库函数可以到网站：www.cplusplus.com 查询

自定义函数：
组成：
ret_type fun_name(para1, *)
{
	statement;//语句项
}
ret_type  返回类型
fun_name 函数名
paral  函数参数

举例子：
写一个函数可以找出两个整数中的最大值。

int Max(int x, int y)
{
	
	if (x > y)
	
		return x;
	
	else  
	
		return y;
	
}
int main()
{
	int a = 12;
	int b = 23;
	int c=Max(a, b);
	printf("%d\n", c);
	int d = Max(12, 45);
	printf("%d\n", d);
	return 0;
}

//写一个函数可以交换两个整形变量的内容：
void swap(int x, int y)  //x,y不用返回值就用 void
{
	int temp = 0;
	 temp=x;
	 x = y;
	 y = temp;

}
int main()
{
	int a= 2;
	int b =4;
	swap(a, b);
	printf("a=%d\nb=%d", a, b);
	
	return 0;
} //err  ,进入函数时，a的值赋予x的储存空间，b的值赋予y的储存空间。
 //它们的值交换成功后，它们只是赋值给了x和y的储存空间，等出了函数，a,b的值仍然不变。
