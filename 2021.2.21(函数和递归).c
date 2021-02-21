#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


int main()
{
	int len = 0;
	len = strlen("abc");
	printf("%d\n", len);
	printf("%d\n",strlen("abc"));
	return 0;
}

int main()
{
	printf("%d", printf("%d",printf("%d",43))); //4321
	//printf函数的返回值是打印字符的个数
	//printf("%d",43)--43；printf("%d", 2)--2 ；printf("%d", 1）--1；
	return 0;
}



 下面函数会出现，（warning C4013: “Add”未定义；假设外部返回 int）
除非加入：下面的第一行代码
int Add (int ,int );  //函数声明  ，其中x,y可以省略（int x，int y）
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b); //函数调用
	printf("%d", sum);
	return 0;

}
int Add(int x, int y) //函数定义
{
	int z = x + y;
	return z;
}  


 真正的价值：
	 在源文件单独创建一个add.c文件；再在头文件里创建一个add.h文件。

	 把函数声明放到头文件里add.c 
     #ifndef __ADD_H__
     #define __ADD_H__

	 int Add(int x, int y);//函数声明

     #endif 
  
     把函数定义放到 add.c 文件里
      #include  "add.h"
	 int Add(int x, int y) //函数定义
	 {
		 
		 return x + y;
	 }

	 当我们源文件.c里想使用这个函数时候可以这样：
      #include "add.h"     当我们使用时直接双引号加函数式声明的的头文件
		 int main()
	 {
		 int a = 10;
		 int b = 20;
		 int sum = Add(a, b); //函数调用
		 printf("%d", sum);
		 return 0;

	 }
    这样就不需要额外的声明，定义。方便了许多。

		函数声明：
		1.告诉编译器有一个函数叫什么，参数是什么，返回类型什么。
		但是具体是不是存在不紧要。
		2.函数的声明一般出现在函数的使用之前。要满足先声明后使用。
		3.函数的声明一般要放在头文件中的。




函数递归：

int main()
{
    printf("hehe\n");
    main();
    return 0;
}//死循环打印hehe ，然后程序挂了。  停下来回打印：stack overflow 栈溢出
 //递归长出现的错误：栈溢出
内存分为：

栈区 ：局部变量
函数形参


堆区：动态开辟的内存
malloc calloc 等函数


静态区：全局变量
static修饰的变量



练习1：接受一个整形值（无符号），按照顺序打印它的每一位。例如：输入1234 ，输出1 2 3 4

void print(int n)
{
    if (n > 9)
    {
        
        print(n/10);
    }
    printf("%d ", n %10);
}
int main()
{
     unsigned int  num = 0;
    scanf("%d", &num);
    print( num);
    return 0;
}


分析：

假如输入的数是123
n = 123; 123>9   进入if  而if里面又是一个print函数（第一个print函数) 即进入第二次的print函数循环 n=123/10=12  

12>9 进入第二个print函数的if  if里面又有个print函数n=12/10=1  ,进入第三个print函数 又1<9 ,if条件不成立，则pintf("%d",1%10)  输出1 ；

第三个print函数结束，输出的1返回第二个pinrt函数中的print(n/10)，然后继续执行下面的代码 打印 12%10=2

第二个print函数结束，输的2返回第一个prinf函数的print(n/10)，然后继续执行下面的代码 打印 123%10 =3  到这里运行完毕 输出 1 2 3 


  练习2：
    编写函数不允许创建临时变量，求字符串的长度。

    先直接求字符串的长度：
    int main()
{
    char arr[] = "1234";
    int charr = strlen(arr);
    printf("%d", charr);
}

    int my_strlen(char* arr1) 
    {
        int count = 0;  
        while (*arr1 != '\0') //判断传过来的字符是不是'\0'
        {
            count++;
            arr1++;  //下一个字符
        }
        return count;
    }

    int main()
    {
        char arr[] = "welcome";
        int charr = my_strlen(arr);//arr 是数组，数组传参，传过去的不是整个数组，而是数组的首个元素的地址
        printf("%d", charr);
        return 0;
}

    答案：不能创建临时变量

  int my_strlen(char* arr1)
    {
        if (*arr1 != '\0')
            return  1 + my_strlen(arr1 + 1);
        else
            return 0;
    }

    //把大事化小
    //my_strlen("bit");
    //1+my_strlen("it");
    //1+1+my_strlen("t")'
    //1+1+1+my_strlen("\0")
    //1+1+1+0
    //3

    int main()
    {
        char arr[] = "welcome";
        int charr = my_strlen(arr);
        printf("%d", charr);
        return 0;
    }