#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{   
//	int a = 0;
//	printf("加入比特\n");
//	
//	while (a<=100)
//	{
//		printf("敲代码 %d\n",a);
//		a++;
//	}
//	if (a > 100)
//	{
//		printf("走上人生巅峰\n");
//	}
//	return 0;
//}




//int main()
//{
//	int A = 0;
//	printf("迷茫什么都不知道\n");
//	while (A <= 10000)
//	{
//		printf("学习计算机与程序设计 %d\n",A);
//		A++; 
//	}
//	if (A> 10000)
//	printf("考上大学找份钱多的工作\n");
//	return 0;
//}
//
//


//int main()
//{
//	int a = 0;
//	printf("我要怎么样?\n");
//	while (a <= 10000);     //傻逼的找了好久，在这里加个;!!
//	{
//		printf("学习 %d\n",a);
//		a++;
//	}
//	if (a>10000)
//		printf("成功\n");
//    return 0;
//}




//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("输入两个数:>");
//	scanf("%d%d", & a, &b);
//        c= Add(a, b);
//
//	printf("sum = %d\n", c);
//	return 0;
//}
//


//函数有两种：库函数和自定义函数


//int add(int x,int y)
//{
//	
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 23;
//	int b = 45;
//	
//	int c=add(a, b);
//	printf("%d\n", c);
//	return 0;
//}  



//数组：

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	printf("%d%d%d%d", a, b, c, d);
//	return 0;
//}

//上面的代码比较麻烦

//int main()
//{
//	int num[5] = { 1,2,3,4 };//定义一个5个整形数字的数组，里面有数字1，2，3，4
//
//	printf("%d",num[2]);//下标的方式访问数组的位置 num[下表]
//	return 0;
//}


//用while的形式表示

//int main()
//{
//	int num[10] = { 1,2,3,4,5,6 };
//	int i = 0;
//
//	while (i <10)
//	{
//		printf("%d\n", num[i]);
//		i++;
//	}
//	if (i =10)
//		printf("over");
//	return 0;
//}


//   操作符

//int main()
//{
//	int a = 5/2; //这个操作符是除 ，得出的结果是商也就是2，至于余数就没有显示 
//	printf("%d", a);
//	return 0;
//}


//int main()
//{
//	int a = 5 % 2; //这个操作符是%（取模），这个函数会得出两个数的商的余数也就是1
//	printf("%d", a);
//	return 0;
//}


//移（二进制）位操作符
// <<左移
// >>右移
  

//int main()
//{
//	int a = 1;
//	//int 整形占4个字节-32bit位
//	//00000000000000000000000000000001
//	int b = a << 1;
//	// 移位后是00000000000000000000000000000010 转化为二进制是2
//	printf("%d\n", b);
//	printf("%d\n", a); //移动的只是b
//	return 0;
//}



//（二进制）位操作
// & 按位与
// | 按位或
// ^ 按位异或

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	//3的二进制是 011
//    //5的二进制是 101
//	//3&5二进制是 001 转化为十进制是 1
//	//c语言里0为假 1为真
//	//与的意思是真1与假0相与，得到假0；真1与假0，得到假0；真1与真1，得到真1
//	//3|5二进制是111 转化为十进制是 7
//	//或的意思是真1与假0或 ，得到真1；真1与假0，得到真1；真1与真1，得到真1
//	//异或的计算规律是对应的二进制位相同，则为0；相异，则为1
//	//3^5二进制是110 转化为十进制是 6
//	printf("%d\n ", c);
//	printf("%d\n ", d);
//	printf("%d\n ", e);
//	return 0;
//
//}





//赋值操作符；
//
//复合赋值符：
//int main()
//{
//	int a = 10;
//	a = 20; //=赋值 ；==判断相等。
//	a = a + 10;   等价的写法： a += 10;
//	a = a - 10;   等价的写法： a -= 10;
//	a = a & 2;    等价的写法： a &= 2;
//	return 0;
//}


//单目操作符：
//双目操作符：
//三目操作符：

//
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b; // +是双目操作符
//	//C语言中我们表示真假
//	//0-假
//	//非0-真
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	//！的意思是把假变真，把真变假
//	//如果 ！0 则变成1
//	return 0;
//}

int main()
{
	int a = 10;
	int b[10] = { 0 };
	int sz = 0;
	printf("%d\n", sizeof(a)); 
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof( b)); //10 * sizeof(int) = 10*4 =40
	//计算数组的元素个数
    //个数 = 数组总大小\每个元素的大小
	sz = sizeof(b)/sizeof(b[0]);
	printf("%d\n", sz);
	//sizeof 计算的是变量/类型所占空间的大小，单位是字节byte
	printf("%d\n", sizeof a);
	//printf("%d\n", sizeof int); err
	//sizeof 后面加变量是可以不加括号；但是加变量时一定要有括号
	return 0;
}

