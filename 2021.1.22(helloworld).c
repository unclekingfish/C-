


//使用别人的东西要打招呼——#include
//包含一个叫stdio.h的文件
//std表示standard (规格） i表示input o表示output .h即头文件
#include <stdio.h>

int main() //int表示整形的意思;main前面的int表示函数调用返回一个整型值
{
   printf("hello world\n");
    //函数-print function-打印函数； 
    //printf; 打印的内容用圆括号和双引号括起来；\n 表示换行；
    //printf是库函数；库函数是C语言本身提供给我们使用的函数
       库函数是将函数封装入库，供用户使用的函数的一种方法。
        方法是把一些常用的函数编完放到一个文件里，供人调用。
       调用时把它所在的文件名用#include<>加到括号里面就可以。
    //使用库函数（使用别人的东西）--要向别人打招呼---#include

	return 0;//返回 0
}

还有void main()这种写法，不过是过时的。



#include<stdio.h>

int main()
{
	//printf("学代码很难啊/n");// (/n是错的)---应该是\n才是换行
	printf("学你麻痹代码\n");
	return 0;
}




