#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

for 循环的变种2：

int main()
{
	int x, y;
	for (x = 0, y = 0;x < 2 && y < 5;++x, y++)
		//x ,y为0。则满足x<2 && y<5,打印第一hehe;打印完无论是前置++，还是后置++，x,y都为1
		//1满足判断条件，为真。打印第二次hehe；打印完，x=2,y=2,不符合x<2 && y<5 为假，跳出循还。
	{
		printf("hehe\n");
	}
	return 0;
}

练习：
请问循环要循环多少次？
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0;k = 0;i++, k++)  //判断部分k=0 =赋值 ==是判断 ；0为假，循环根本就不进去
		k++;
	return 0;
}//答案为0次 。且若k=非0,则为死循环


do... while(); 循环   特点：循环至少执行一次，使用场景有限，所以不是经常使用。
do语句的语法：

do
   循环语句；
while(表达式)
例子
int main()
{
	int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	} while (i <= 10); //1~10循环
		return 0;
}

int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			break;
		printf("%d ", i); //前面1 2 3 4 没问题。当打印了4后，i++ ,i=4+1=5  进入if循环 i== 5 条件成立，
		                  //break 跳出do while循环，直接结束程序。
		i++;
	}
	while (i <= 10);
	return 0;
}


int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf("%d ", i); //前面的1 2 3 4 没问题。当i++，i=4+1=5 ，符合if(i==5)循环
		                  //则continue 跳出本次循环，直接回到do开头，又进行if判断，i==5，结果又为真，又continue,又跳回do开头，死循环。
		i++;
	} while (i <= 10);
	return 0;
}

练习：
1.计算n的阶乘。  1x2x3x4x5x...n

try:
	int main()
{ 
	int n =0;
	int m = 1;
		for (n=0;n<m;n++)
	{
			for(m=1;)
		printf("%d*%d", &n,&m);
		m++;
	}
	return 0;
}

anser：
int main()
{
	int n = 0;
	int m = 0;
	int ret = 1;
	scanf("%d", &n);
	for (m = 1;m <= n ; m++)
		
			ret = ret* m;
	printf("ret= %d\n", ret);

	return 0;
}