#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


指针：

内存计算机上特别重要的是存储器，计算机所有的程序运行都是在内存中进行的。
为了有效利用内存，把内存划分为一个一个小的内存单元，每个内存单元的大小是1个字节（byte)
为了有效的访问到内存的每个单元，就给内存单元进行了编号，这些编号就被称为地址。

解释
我们电脑都有32位和64位之称，而这个32位可以说是32条电缆，每一条电缆它都掌握着开关；开就相当于1，关就相当于0。
那32条有2的32次方种地址。如果它的最小存储单位是bit（比特），那就最多存储2的32次方+1个比特（bit)。
用电脑的计算器-高级-程序员计算 BIN(二进制)100000000000000000000000000000000 转换成10进制就是 4294967296 bit 
除以8 等于536870912 byte（字节），除以1024 等于524288 kb(千字节) ，除以1024等于512 mb（兆字节），处于1024等于0.5GB（千兆字节）
0.5 GB 大小的地址容量，相对于4G相对于4G或者8GB大小的内存实在是太小了。如果我们把最小单位从比特改为字节，0.5*8=4GB 这相对来说就合理很多了。
所以把内存划分为一个一个小的内存单元，每个内存单元的大小是1个字节（byte)。

int main()
{
	int a = 13;
	int* c = &a; //& - 取地址符; 取出a的地址
	printf("%p\n", &a);  //%p - 以地址的形式打印    p(paddress)
	printf("%p\n", c);
	//printf("%p\n", int*); err
	return 0;
}



地址如何存储,需要定义指针变量

int main()
{
	int a = 12;//向内存申请4个字节的空间
	int e = 11;
	int *c = &a; //c作为一个整型指针变量
	int* b = &e;//b是一个变量- 指针变量  ；类型是int*
	printf("%p\n", e);
	printf("%p\n", b);//b是个指针变量，它是存储e的地址。但是b也有自己的空间地址，所以两个地址不同
	*c = 20;//从*c存储空间中的a的地址，按地址找回a的位置，找到a后再赋值20给a改变a的值。
	*b = 21;//*-解引用操作符/间接访问操作符
	printf("%d\n", a);
	printf("%d\n", e);
	return 0;
}

注：  int* p = &a; 
         int* 是一个整体，它和int一个道理它是种类型，但是它带有*就有多一种理解
         就表示p是一个指针变量，表示p指向的对象a类型是int

      *c 这个*和上面的*不一样，上面的*放在那就是个语法形式，没什么实际价值
         下面*c的*是个操作符，用来解引用

int main()
{
			 double a = 3.14;
			 double* b = &a;
			 *b = 5.34;
			 printf("%lf\n", a);
			 printf("%lf\n", *b);
			 printf("%lf\n", b);
			 printf("%d\n", sizeof(b));//32位是4 ；64位是8

			 return 0;
}


int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(float*));
	return 0;
}



struct 结构体
一些复杂对象需要描述时
比如：人 是由身高，体重，年龄，名字....等等的一些数据组合描述的
      一本书 是由书名，价格，出版社，出版号.....等等的一些数据描述的

	复杂对象-结构体-我们创造出来的一种类型


	struct Book
{
	char name[20];//数据结构
	int price;//44
};  //;分号不可缺少！！=
int main()
{
	//利用结构体类型-创建一个类型的结构提变量
	struct Book	b1 = { "数据结构",44 };
	printf("书名：%s\n", b1.name);
	printf("价格：%d元\n", b1.price);
	b1.price = 34;
	printf("最新价格：%d元\n", b1.price);
	return 0;
}



struct Book
{
	char name[20];
	int price;
};
int main()
{
	struct Book b2 = { "C语言程序",55 };
	struct Book* pd = &b2;
	//利用pd打印书名和价格
	printf("%s\n", (*pd).name);
	printf("%d\n", (*pd).price);
	// . 为结构成员访问操作符
	// . 操作符应用到结构体变量 .可以找到成员
	//简化：
	printf("%s\n", pd->name);
	printf("%d\n",pd->price);
	//->  拿到的是结构体指针 ->加上成员
	return 0;
}

怎么修改结构体的书名：

struct Book
{
	char name[20];
	int price;
};
int main()
{
	struct Book b3 = { "计算机基础",66 };
	 //b3.name = "c++";//err 字符串不行
	 //b3.price = 52;//ok  数字可以
	strcpy(b3.name, "C语言");// strcpy -string copy -字符串拷贝
	//strcpy 是一个库函数 要使用必先申明 #include<string.h>
	printf("%s\n", b3.name);
	return 0;
}


test：

struct man
{
	double weight;
	double height;
	char name[5];
	char sex[5];

};
int main()
{

	struct man m1 = { 65.2 ,179,"张三","m" };
	printf("%lf\n", m1.weight);
	strcpy (m1.name, "李四");
	printf("%s\n", m1.name);
	return 0;
}


//test2:
struct man
{
	double weight;
	double height;
	char name[5];
	char sex[5];

};
int main()
{

	struct man m1 = { 65.2 ,179,"张三","m" };
	struct man* mp = &m1; //找到一个mp的空间存放m1的地址，类型还是结构体变量
	//printf("%s\n", (&m1).name);  err
	printf("%s\n", mp->name);
	printf("%lf\n",(*mp).weight);
	return 0;
}