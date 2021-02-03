#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

分支语句 (选择结构）if和switch

什么是语句？
c语言中由一个分号;隔开的就是一条语句。比如：
printf("haha");
1 + 2;
 ; //是语句-空语句


int main()
{
	int man = 10;
	if (man < 18)
	    printf("未成年\n");
  //else if (18<=man<60)  //不行，会依然打印未成年。
   代码执行顺序是18<=man 是对于上面的条件为假，为0 ,0<60,所以打印未成年
	else if (man >= 18 && man < 60)  //&& 逻辑与操作符
		printf("壮年\n");
	else if (man >= 60 && man < 120)
	    printf("老年人\n");
	else if(man>=120)
		printf("入土为安\n");
	return 0;
}

int main()
{
	int a = 2;
	if(a < 18)
	printf("未成年\n");
	else
	{
	if (a >= 18 && a < 70)
		printf("壮年\n");
	else if (a >= 70 && a < 120)
		printf("老年\n");
	else
		printf("神仙\n");
 }
	return 0;
}

注：上面两个程序表达的是一个意思。


int main()
{
	int a = 2;
	if (a < 18)
	//{
		printf("未成年\n");
		printf("不能上网吧\n"); //需要加大括号{}代码块才能编译。
		//if 语句包括else语句如果要控制多条语句得用大括号{}括起来
	//}
	else
	{
	if (a >= 18 && a < 70)
		printf("壮年\n");
	else if (a >= 70 && a < 120)
		printf("老年\n");
	else
		printf("神仙\n");
 }
	return 0;
}


int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	//{
		if (b == 2)
			printf("hehe\n");
	//}
	    else
			printf("haha\n");
	return 0;
}
else 会选择最近的if匹配，无论看起来和第一个相对位
上面程序 首先if(a==1)进行判断，应为a=0,所以if判断不成立，程序结束返回零
else 其实是和if(b==2)相匹配。


int main()
{
	int a = 3;
	if (a = 5) //= 是赋值 ==是赋值
    //改良：if (5 ==a) 这样即使打错成一个=，程序也不会成功运行。能有效找出错误
	{
		printf("hehe");
	}
	return 0;
}//如果涉及一个常量(2)和一个变量（num)的比较最好是把常量（2）提前，这样才是一个好的写代码风格。


练习：
1.判断一个数是否为奇数
2.输出1 - 100之间的奇数

思路：
设int a = 0; int b = a&2 （ &-求两个数相除的“余数”） 如果b>1就一定是奇数。


int main()
{
	int a = 1;
	while (a <=100)
	{
		
		if (a & 2 ==1) //  (a & 2 !=0)也行
		printf("%d ", a );
		a++;
	}

	return 0;
}

方法2:
int main()
{
	int a = 1;
	while (a < 100)
	{
		
		printf("%d\n", a);
		a+= 2;
	}
	return 0;
}