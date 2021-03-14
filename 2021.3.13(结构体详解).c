#define CRT_SECURE_NO_WANRNINGS
#include<stdio.h>
结构体模式：

struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1, s2, s3;//s1,s2,s3 是三个全局的结构体变量

//程序应该尽量少用全局变量，推荐下面的结构体模式

typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;//struct Stu 改了 现在直接用Stu就可以了
int main()
{

	struct Stu s;//局部变量
	Stu s2; //第二种结构体模式
	return 0;
}

结构体的成员可以是 标量 数组 指针 甚至是其他结构体 
标量是普通变量

typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
int main()
{

	Stu s1 = { "张三",20,"123456","男" };//局部变量
	struct Stu s2 = { "旺财",30,"1864545455","保密" }; 
	return 0;
}


struct S
{
	int a;
    char  c;
    char arr[20];
    double d;
};
struct T
{
	char ch[10];
	struct S s;
	char* pc;

};
int main()
{
	char arr[] = "helle world\n";
	struct T t = { "hehe",{100,'w',"hello beauty",3.14},arr };
	printf("%s\n", t. ch);//hehe
	printf("%s\n", t.s.arr);//hello beauty
	printf("%lf\n", t.s.d);//3.14
	printf("%s\n", t.pc);//hello world
	return 0;
}

结构体访问与传参：

typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
void Print1(Stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}
void Print2(Stu* ps)
{
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);
}
int main()
{
	Stu s = { "李四",40,"1558995656","男" };
	//打印结构体数据
	//Print1和Print2 那个更好
	//Print1 实现打印要多开辟相同一份的数据空间还有时间 
	//Print2 传地址就只是需要开辟一个存放地址的空间
	//Print2更好
	Print1(s);
	Print2(&s);

	return 0;
}

函数传参的时候，参数是需要压栈的。
如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = 0;
	ret = Add(a, b);
	return 0;
}

栈区    ：局部变量
          函数的形式参数
	      函数调用也开辟空间


堆区    ：动态内存分配
          malloc/free
	      realloc
	      calloc


静态区  ：全局变量
          静态变量




栈区：   
	           x
	           y        Add函数开辟的区域
	           z         
	        
	           x        a`
	           y        b`
	   
	           ret 
	           b        main  (main在栈区开辟了3个空间)
	           a


数据结构：
--------线性数据结构
顺序表    123456  数组形式存放数据
链表      随便找位置存放一些数据  ，再把这些数据找到  比如1能找到2；2能找到3 ；3能找到4 我们想找条链子把每一个数据链接起来
栈        在栈里放数据（放元素进去叫压栈），栈特点：顶上进顶上出
队列

--------树形数据结构
二叉树

--------图


插入一个元素：压栈
删除一个元素：出栈
栈：先进后出 ，后进的先出
 

可以baidu一下:函数栈帧的创建和销毁