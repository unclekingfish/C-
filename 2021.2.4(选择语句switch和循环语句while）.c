#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


 switch语句：也是一种多分枝语句。常常用于多分枝的情况

 比如：

int main()
{
	 int a = 0;
	 if (a == 1)
		 printf("星期一\n");
	 else if (a == 2)
		 printf("星期二\n");
	 else if (a == 3)
		 printf("星期三\n");
		 .
		 .
		 .
	return 0;
 }
 上面这样写比较繁琐

 可以利用switch语句简化

case 

int main()
{
    int a = 0;
    int n = 1;
    scanf("%d", &a);
    switch (a)   //switch (整形表达式） 括号中的一定是整形表达式 int
    {
    case 1: //如果是 case 1.0: 这是不行的。虽然和1一个意思但是它不是整形类型会报错（非法的case表达式）
            //1+0 也是可以的 ；而 case n：是不行的 ，n是变量。
        printf("星期一\n");
        break; //终止 跳出switch
    case 2:
        printf("星期二\n");
        break;
    case 3:
        printf("星期三\n");
        break;
    case 4:
        printf("星期四\n");
        break;
    case 5:
        printf("星期五\n");
        break;
    }
    return 0;
} //switch 入口 ;break 出口;



要求：输入1-5，输出是工作日；输入6-7，是休息日

int main()
{
    int a = 0;
    int b = 1;
    scanf("%d", &a);
    switch (a)   
    {
    //default:   //default 的位置放哪儿不影响
       // printf("输入错误\n");
       //break; 
    case 1: 
        if (b == 1) //switch 中可以加if (但是不能加continue)
            printf("星期一不想上班啊！\n");
    case 2:
        
    case 3:
        
    case 4:
        
    case 5:
        printf("工作日\n");
        break;
    case 6:
        
    case 7:
        printf("休息日\n");
        break;//最后的break ;虽然加不加的意义不大，但是为了以后补充代码时不容易出错
    default: 
        printf("输入错误\n"); //如果前面的值都不匹配，default处理非法情况，可以给你个提示，让你知道输入错误
        break;
    }
    return 0;
}//case 后面的break 不一定需要的。

练习：算出 n和m的值
int main()
{
	int n = 1;
	int m = 2;
	switch (n)//n=1 
	{
	    case 1: m++; //m=3
		case 2: n++; //n=2
		case 3:
			switch (n)//n=2
			{//switch 允许嵌套使用
			case 1: n++;// n==2 ;case 1跳过
			case 2:m++;n++;break;//m=4,n=3

			}
		case 4:m++; //m=5
			break;
		default:
			break;
	}
	printf("m=%d,n=%d\n", m, n);//m=5 ,n=3
	return 0;
}


while 循环语句

屏幕打印1到10
int main()
{
	int a = 1;
	while (a < 11)
	{
		if (a == 5)
			break;//输出结果是 1 2 3 4  没有5 。因为当a==5时，就跳出循环，不打印了就没有5了
		printf("%d\n", a);
		a++;
	}
	return 0;
}

将break 换成continue
continue :跳过本次循环下面的代码，从新开始循环
int main()
{
	int a = 1;
	while (a <=10)
	{
		if (a == 5)
			continue ;//当a=5 时程序进行到continue ，它又跳回while进行判断，这样死循环一直下去
		printf("%d\n", a);//输出是1 2 3 4 后面是什么都没（没有平常的结束的一些标语）进入了死循环
		a++;
	}
	return 0;
}

改：
int main()
{
	int a = 0;
	while (a <= 10)
	{
		a++;
		if (a == 5)
			continue;//当a=5时，不执行下面的代码，跳回while从新开始。
		            //执行下去a++ = 5+1=6 ,6!=5 则不执行continue,打印6
		printf("%d\n", a);
		//输出结果是 0 1 2 3 4 6 7 8 9 10 
	
	}
	return 0;
}

while 循环中break 和continue 的区别：

break 只要遇到break就停止后期所有的循环，直到终止循环。用于永久终止循环的
continue 用于终止本次循环的，也就是本次循坏中continue后边的代码不会在执行，而是直接跳转到while语句的判断部分，进行下一次循环的入口判断。


int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF) //getchar :获取字符,接收键盘输入的一个字符的意思
		//获取一个字符放进叫ch的变量里 ,判断ch的字符是不是EOF
		putchar(ch);
	return 0;
}

getchar  getchar 的用法
int main()
{
	int ch = getchar();
	putchar(ch); //getchar之后就是putchar   putchar输出getchar输入的字符
	//输出ch的一个字符。 putchar 输出字符意思和printf差不多。
	printf("%c\n", ch);
		return 0;
}


int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF) 
		putchar(ch);
	return 0;
}

为什么输入EOF时，循环还是不结束？
上面的程序，输入CTRL +Z 时候程序才会结束。
EOF  -> end of file  ->  -1
