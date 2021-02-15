#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

题目：编写程序数一下1到100的所有整数中出现多少个数字9

int main()
{
	int num = 0;
	int count = 0;
	for (num = 1;num <= 100;num++)
	{
		if (num % 10 == 9)
		{
			printf(" %d", num);
			count++;
		}
		 if (num / 10 == 9) //还有90-99这段数字也是含有数字9的
		{
			printf( " %d", num);
			count++;
		}
	}
	printf("\count=%d", count); //20 个,第一个if里包括99；第二个if里也包括99；
	return 0;
}


题目：计算1/1-1/2+1/3-1/4+1/5....+1/99-1/100 的值，打印出结果

int main()
{
	int i;
	double sum1 = 0.0;
	double sum2 = 0.0;
	double sum = 0.0;
	double b= 0.0;
	double c= 0.0;
		for (i = 1;i <= 100;i+=2)
		{
			//b = 1 / i; 这样写不行，因为1/2的商是1，他还有余数。正确应该是是1.0/2=0.5
			b = 1.0 / i;
			sum1= sum1+ b;
	     }
		
		for (i = 2;i <= 100;i+=2)
		{
			
			c = 1.0/i;
			sum2 = sum2+ c;

		}
		sum = sum1 - sum2;
		printf("%lf", sum);
	return 0;
}

答案：
int main()
{
	int i = 0;
	double sum= 0.0;
	int flag = 1;
		for (i = 1;i <= 100;i++)
		{
			sum += flag*1.0 / i;   //当flag=1时，1/1, 1/3为正；当flag=-1时，1/2 ,1/4为负
			                       //sum=1/1-1/2+1/3-1/4....+1/100
			flag = -flag;

		}
		printf("%lf", sum);
	return 0;
}


题目：求十个整数的最大值

答案：
int main()
{
	int num[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-11 };
	int i = 0;
	int sz = sizeof (num) / sizeof (num[0]);
	int max = num[0]; //最大值
	for (i = 1;i <sz;i++)
	{
		if (num[i]> max) //如果第二个数大于num[0]第一个数，，则将max替换成第二个数，轮回下去。
		{
			max = num[i];
		}
	}
	printf("%d", max);
	return 0;
}

题目：
在屏幕上输出9*9乘法口诀

int main()
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = 1;i < 10;i++)
	{
		for (j = 1;j < 10;j++)
		{
			sum = i * j;
			printf(" %d*%d=%d ", i, j,sum);
		}
	}
	return 0;
}

答案：
int main()
{
	int i = 0;
	
	int sum = 0;
	for (i = 1;i <= 9;i++)
	{
		//打印一行
		int j = 1;
		for (j = 1;j<=i;j++)
		{
			
			printf("%d*%d=%-2d ", i, j, i*j);
		     //%-2d ->两位左对齐
			//%2d是将数字按宽度为2，采用右对齐方式输出，若数据位数不到2位，则左边补空格
		}
		printf("\n");
		}
		

	return 0;
}

输出结果
1 * 1 = 1
2 * 1 = 2  2 * 2 = 4
3 * 1 = 3  3 * 2 = 6  3 * 3 = 9
4 * 1 = 4  4 * 2 = 8  4 * 3 = 12 4 * 4 = 16
5 * 1 = 5  5 * 2 = 10 5 * 3 = 15 5 * 4 = 20 5 * 5 = 25
6 * 1 = 6  6 * 2 = 12 6 * 3 = 18 6 * 4 = 24 6 * 5 = 30 6 * 6 = 36
7 * 1 = 7  7 * 2 = 14 7 * 3 = 21 7 * 4 = 28 7 * 5 = 35 7 * 6 = 42 7 * 7 = 49
8 * 1 = 8  8 * 2 = 16 8 * 3 = 24 8 * 4 = 32 8 * 5 = 40 8 * 6 = 48 8 * 7 = 56 8 * 8 = 64
9 * 1 = 9  9 * 2 = 18 9 * 3 = 27 9 * 4 = 36 9 * 5 = 45 9 * 6 = 54 9 * 7 = 63 9 * 8 = 72 9 * 9 = 81


猜数字游戏
1.电脑会生成一个随机数
2.猜数字

时间戳：当前计算机的时间-计算机的起始时间（1970.1.1.0:0:0) =(xxxx)秒

void menu()
{
	printf("##############################\n");
	printf("####   1.play    0.exit   ####\n");
	printf("##############################\n");
}
void game()
{
	//1.生成一个随机数 
	int ret = 0;
	int guess = 0;
	//用时间戳来设置随机数的生成起始点
	//time_t time(time_t *time) ;本质是long 类型-长整形
	//time_t
	//srand((unsigned int)time(NULL)); //NULL ->空指针 不想让函数产生实质效果
	   //上面这句代码放错位置。
	//用time函数 需要声明<time.h>
	//设置一个随机数起点；使用要声明使用<stdlib.h> 

	ret = rand() % 100 + 1; //生成1-100之间随机数     // 生成一个随机数  使用需要声明使用<stdlib.h> 
   //生成随机数0 - RAND_MAX(0f7fff) ;0f--十六进制；7fff转化为十六进制是32767
  //	printf("%d\n", ret);
	//2.猜数字

	while (1)
	{
		printf("请输入数字>:");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("输入的数字大了\n");

		}
		else if (guess < ret)
		{
			printf("输入的数字小了\n");

		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //放着就好，只要生成一次就好，不必每次玩游戏都生成。
	do
	{

		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);//input 输入为0 为假则退出循环；输入为非0 为真则继续循环。
	return 0;
}


try myself

void menu()
{
	printf("**************************************\n");
	printf("*****  1.开始游戏   0.退出游戏   *****\n");
	printf("**************************************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1; //<string.h>   rand()%100 -——32767 % 100=1-99之间的余数 

	while (1)
	{
		printf("请输入数字\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("输入的数大了\n");
		}
		else if (guess < ret)
		{
			printf("输入的数小了\n");
		}
		else 
		{
		printf("你猜对了\n");
		break;
        }

	}


}
int  main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
   
	
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:

			game();
			break;

		case 0:

			printf("退出游戏\n");
			break;

		default:

			printf("选择错误，从新开始\n");
			break;
		}
	} while (input);
	return 0;
}



goto 语句的使用：最常见的用法是终止程在某些深度嵌套的结构的处理过程，例如一次跳出两层或多层循环

一个关机程序：

int main()
{
	int input[20] = { 0 };
	system("shutdown -s -t 120"); //调用system函数 需要声明申请<stdlib.h>
	again:
	printf("输入“你好”否则电脑将在2分钟内关机。");
	scanf("%s", input);
	if (strcmp(input, "你好")==0) //比较两个字符串 -strcmp  使用时要申明<string.h>
	{
		system("shutdown -a");
	}
	else
	{
		
		goto again;
	}

	return 0;
}

for法：
int main()
{
	int input[20] = { 0 };
	int i = 0;
	system("shutdown -s -t 120");
	printf("你有3次机会输入“你好”，不然电脑将在两分钟内关机\n");
	
	for (i = 0;i < 3;i++)
	{
		scanf("%s", input);
		if(strcmp(input, "你好")==0)
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("输入错误\n");
		}
	}
	return 0;
}
//
while 法：

int main()
{
	int input[] = { 0 };
	system("shutdown -s -t 120");
	
	
	while (1)
	{
		printf("请输入口号“老铁”，不然电脑讲在2分钟内自动关机\n");
		scanf("%s",&input);
		if(strcmp(input,"老铁")==0)
			{
				system("shutdown -a");
				break;
			}
		
	}
	return 0;
}