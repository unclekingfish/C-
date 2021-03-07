#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

逗号表达式：就是用逗号隔开的多个表达式。逗号表达式，从左向右依次执行。整个表达式
的结果是最后一个表达式的结果。

int main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1); // a=2+10=12  ; b=12+1=13  c= 13
	return 0;
}

if (a=b+1, c=a/2 ,d>0)   //如果d>0 ,则表达式为真


a = get_val();
count_val(a);
while (a > 0)
{
	//业务处理
	a = get_val();
	count_val(a);
}

如果用逗号表达式，改写：
while (a = get_val(), count_val(a), a > 0)
{
	//业务处理
}


下标引用操作符，函数调用操作符和结构成员操作符

1下标引用操作符[]
操作数：一个数组名 + 一个索引值


int main()
{
	int arr[10] = { 0 };
	arr[9] = 10;
	//[]的两个操作数是arr和9
	return 0;
}


函数调用操作符

int get_max(int x, int y)  //这个括号()是定义函数的时候用的，不是函数调用操作符
{
	return x > y ? x : y;
}
int main()
{
	int a = 10;
	int b = 20;
	//下面get_max()调用函数的时候的()就是函数调用的操作符
	int max = get_max(a, b); //3个操作数get_max ,a ,b   所以函数调用操作符最少有1个操作数
	printf("max=%d\n",max)
	return 0;
}

结构成员操作符

//学生
//创建一个结构体类型 -struct Stu
struct Stu
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	int a = 10;
	//使用struct Stu 这个类型创建了一个学生对象s1,并初始化
	struct Stu s1 = { "张三",20,"201910305" };
       struct Stu* ps = &s1;
	   printf("%s\n", ps->name);
	   printf("%d\n", ps->age);
	   //结构体指针 ->成员名

	   printf("%s\n", (*ps).name);
	   printf("%d\n", (*ps).age);


	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	//结构体变量.成员名

	return 0;
}

整形提升
int main()
{

	char a = 3;
	//00000000000000000000000000011   -int a 4b  
	//00000011 -a   char a 1b
	char b = 127;
	//00000000000000000000001111111   -int b
	//01111111 -b
	 
	//a和b如何相加
	//00000000000000000000000000011
	//00000000000000000000001111111
	//00000000000000000000010000010
	//
	char c = a + b;
	//100000010  -c
	//11111111111111111111110000010 - 补码
	//11111111111111111111110000001 -反码
	//10000000000000000000001111110 -原码
	//-126
	printf("%d\n", c); 
	return 0;
}

实例1：
int main()
{
	char a = 0xb6;  //1011 0110(2进制）   char a 变成int a 11111111111111111111111110110110
	short b = 0xb600;//1011 0110 0000 0000     short b 变成int b 1111 1111 1111 1111 1011 0110 0000 0000
	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c");
	return 0;     //c
}

int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));  //%u -无符号的十进制整数  1
	printf("%u\n", sizeof(+c));//4  c只要参与表达式运算，就会发生整形提升，表达式+c 发生提升，所以sizeof（+c)是4个字节
	printf("%u\n", sizeof(!c));//1
	return 0;
}


算数转换


问题代码：
int fun()
{
	static int count = 1;  
	return ++count;
}
int main()
{
	int answer;
	answer = fun() - fun() * fun();
	printf("%d\n", answer);//输出多少
	return 0;
}

解析：
当第一次进入函数时，输出2 ；第二次进入 ，因为static 的存在 int count =1 这个赋值不算。count 的值继承上一次count的值2 ，输出结果为3
同理第三次进入时，输出为4；
那我们进行answer运算时 ，如果是2-3*4  又有可能是 4-2*3 ，结果有歧义。


int main()
{
	int i = 1;
	int a = (++i) + (++i) + (++i);
	printf("a=%d\n", a);
	return 0;//编译器不同，结果不同
}