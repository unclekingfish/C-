#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>

static:

void test()
{
    int a = 1;
	a++;
	printf("a=%d\n", a);
}

int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}

分析：
    因为i = 0 < 5, 执行test自定义函数，a = 1 a = 1 + 1 = 2 打印结果为2 局部函数运行结束
	然后i++ i = 0 + 1 = 1;
    回到while i=1<5 又执行test函数  a=1(上次局部运算结束后a的值没有累加） a++ = a+1=1+1=2 答应结果为2
	然后i++  i = 1+1+2 ；
	           .
		       .
		       .
    以此循环 打印结果为 2 2 2 2 2


加入static

void test()
{
	static int a = 1; //加了static之后，a是一个静态的局部变量 
		a++;
		printf("%d\n", a);
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;

	}
	return 0;
}

分析：
    第一轮还是和上面一样，a = 2, 打印结果为2, i = 1
    然后 i = 1 < 5 进入test函数的局部变量，这时候 a = 2（保留了上一次的结果）int a = 1 不执行
	直接到a++ a = 2 + 1 = 3 打印结果为3;
                     .
                     .
                     .
           打印结果为 2  3  4  5  6

总结：

1.static 修饰局部变量
局部变量的生命周期变长

2.static 修饰全局变量
改变了变量的作用域——让静态的全局变量只能在自己所在的源文件使用
出了源文件就无法使用。

比如我们新建了一个新的.c源文件 并在第一行输入 static int go_bal = 10;

下面在本源文件输入的
int main()
{
	extern int go_bal; //这时候会显示无法解析的外部符号 go_bal
	printf("%d\n", go_bal);
	return 0;
}

3.static 修饰函数
改变了函数的作用域（说法不准确）
改变了函数的链接属性
由外部链接属性->内部链接属性

在工程下新建一个新的.c源文件，第一行写：
static int add(int x, int y)
{
	int z = x + y;
	return z;

}


下面在本源文件输入的
//声明外部函数
extern int add(int, int);
int main()
{

	int a = 23;
	int b = 22;
	int c = add(a, b);
	printf("c=%d\n", c);
	return 0;
}





#define 用法：
1.#define 定义标识符常量
例子：
#define MAX 19000
int main()
{
	int a = MAX;
	return 0;
}



2.#define 可以定义宏—带参数
函数的实现
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

//宏的实现
#define MAX(X,Y)(X>Y?X:Y)

int main()
{
	int a = 23;
	int b = 44;
	//函数的方式
	int max = Max(a, b);
	printf("max = %d\n", max);
	//宏的方式
	max = MAX(a, b);//max = (a>b?a:b)
	printf("max=%d\n", max);
	return 0;
}


尝试下：

宏的方式

#define MAX(X,Y)(X>Y?X:Y)
int main()
{
	int a = 23;
	int b = 34;
	int c = MAX(a, b);
	printf("c=%d\n", c);
	return 0;
}

函数的方式

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 354;
	int b = 345;
		int c = Max(a, b);
		printf("c=%d\n", c);
	return 0;
}