#include<stdio.h>
//只要你用到函数库，就必须要向C语言打招呼就用到#include
//stadio.h  指standard input output  .h指头文件head

int main()
{
	/*char AA= 'A';*///向内存申请一个空间（空间名字叫AA）存放字符A
	用=号的形式存放字符A
	char--字符类型
	/*printf("%c\n", AA);*///%c表示打印字符格式的数据
	"%c\n",AA 这是种格式，即我以字符的形式打印AA


	int weight = 65; //int整形
	printf("%d\n", weight);  //%d表示打印整形十进制数据


	long num = 100; //long 长整型
	printf("%d\n", num);


	float Π = 3.1495;  //float 单精度浮点小数
		printf("%f\n", Π);  //%f打印小数点6位数的浮点小数—打小数

	double Π = 3.14159;
	printf("%lf\n", Π);  //用%f也可以但是不合适，最好是用%lf适合浮点双精度double


	printf("%d\n", sizeof(char));//1字节
	printf("%d\n", sizeof(int));//4字节
	printf("%d\n", sizeof(short));//2B
	printf("%d\n", sizeof(long));//  4/8B
	printf("%d\n", sizeof(long long));//8B
	printf("%d\n", sizeof(float));//4B
	printf("%d\n", sizeof(double));//8B

c语言标准规定：sizeof(long)>=sizeof(int)

	//sizeof()表示计算出括号内数据类型的大小，即占据内存的大小，单位大小为”字节"




	return 0;

}


计算机中单位
	bit  比特位   一个bit 只能存储一个0或者1    二进制的数  0 或者1
	byte 字节      一个byte=8bit    一个字节等于8个比特位
	kb   千字节    1kb=1024byte
	mb   兆字节（兆）     
	gb   吉字节（千兆）
	tb   万亿字节（太字节）
	pb   千万亿字节（拍字节）  上述都是1个单位等于1024个上级单位数



如上面所说当用到short这个数据类型时，它占用的2个字节（byte)即16个比特（bit)的内存，在二进制上表示为：
0000000000000000
0000000000000001
0000000000000010
       .
	   .
	   .
1111111111111111


它能表示2的16次方种状态；比如如果是整形（int)它能表示2的32次方种状态


二进制转10进制方法：比如二进制1011转10进制，
1011 =1*2^3 + 0*2^2 + 1*2^1 + 1*2^0 = 8+0+2+1=11


10进制转换成2进制的方法：

将正的十进制数除以二，得到的商再除以二，依次类推直到商为零或一时为止，然后在旁边标出各步的余数，最后倒着写出来，高位补零就行了.

42  42除以2 得到21 余数为0；21处于2 得到10 余数为1； 10除以2 商为5 余数为0；5除以2，商为2余数为1；2除以2 商为1，余数为0；
 
倒着写为：101010

计算机内部表示数的字节单位是定长的，如8位，16位，32位。位数不够时，高位补零。8位比特时为 00101010




int main()
{
	short age = 20; //向内存申请两个字节存放名字叫age的数据20
	float weight = 65.2f;//向内存申请4个字节存放小数
	printf("%f\n", weight);
	return 0;
}



int main()
{
	short  age = 20;
	printf("%d\n", age);
	return 0;
}


int num2 = 100;//全局变量-定义在代码块（{}）之外的变量

int mian()
{
	int num1 = 10;//局部变量-定义在代码块（{}）之内的变量
	return 0;
}


int a = 100;
int main()
{
	int a = 10;//当全局变量和局部变量的名字一样时，局部变量优先
	           //局部变量和和全局变量的名字建议不要相同--容易误会，产生BUG
	printf("%d\n", a);
	return 0;

		
}



int main()
{    //计算两个数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0; //这是对的
	scanf("%d%d", &num1 , &num2);//输入数据——使用输入函数scanf
	       //&是取地址符号
 
	//出现c4996警告！显示scanf不安全，要用scanf_s才行,
	//或者到源文件开头第一行加#define _CRT_SECURE_NO_WARNINGS，
	//又或者右击工程-属性-配置属性-C/C++ -预处理器 增加命令行 _CRT_SECURE_NO_WARNINGS


	//int sum = 0;//C语言语法规定，变量要定义在当前代码块的最前面
		sum = num1 + num2;
	printf("sum = %d\n", sum);//sum =%d 中%d指后面sum
	return 0;
}


int main()
{
	int num0 = 0;
	int num1 = 0;
	int sum = 0;
	scanf("%d%d", &num0, &num1);
	sum = num0 + num1;
	printf("sum = %d\n", sum);
	return 0;
}


int main()
{
	{
		int age = 20;
	}
	printf("%d\n", age);
	return 0;   //整形int age的作用在上面的大括号内，下面的age不能使用。出现未申明的标识符警告。


}    



int main()
{
	{
		int age = 40;
		printf("age = %d\n", age);

	}      //局部变量就是其所在的局部代码块内使用。
	return 0; //能跑
}


int main()
{
	//局部变量的作用域
	int age = 44;
	{
		printf("age = %d\n", age);

	}      //printf在外面的大括号内，所以能跑
	return 0;
}



int years = 2021; 
                   全局变量的作用域是整个工程！
void test()
{
	printf("test()--%d\n", years);

}

int main()
{

	test();
		printf("%d\n", years);
	return 0;   //可以运行
	
}



假设已经在工程新建另一个.c文件，开头就写 int month = 8
另外还要在当前使用代码块使用extern声明下，使用了外部的标识。

int main()
{
	//未声明的标识
	//声明extern外部符号的
	extern int month;

	printf("month = %d\n", month);

	return 0;
}



int main()
{
	{
		int global = 2021;
			printf("global= %d\n", global);//ok

	}
	printf("global= %d\n", global); //error

	return 0;
}
局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束。
全局变量的生命周期是：整个程序的的生命周期。


