#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字
//
//时间戳：当前计算机的时间 - 计算机的起始时间（1970.1.1.0:0 : 0) = (xxxx)秒
//
//void menu()
//{
//	printf("##############################\n");
//	printf("####   1.play    0.exit   ####\n");
//	printf("##############################\n");
//}
//void game()
//{
//	//1.生成一个随机数 
//	int ret = 0;
//	int guess = 0;
//	//用时间戳来设置随机数的生成起始点
//	//time_t time(time_t *time) ;本质是long 类型-长整形
//	//time_t
//	//srand((unsigned int)time(NULL)); //NULL ->空指针 不想让函数产生实质效果
//	   //上面这句代码放错位置。
//	//用time函数 需要声明<time.h>
//	//设置一个随机数起点；使用要声明使用<stdlib.h> 
//
//	ret = rand() % 100 + 1; //生成1-100之间随机数     // 生成一个随机数  使用需要声明使用<stdlib.h> 
//   //生成随机数0 - RAND_MAX(0f7fff) ;0f--十六进制；7fff转化为十六进制是32767
//  //	printf("%d\n", ret);
//	//2.猜数字
//
//	while (1)
//	{
//		printf("请输入数字>:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("输入的数字大了\n");
//
//		}
//		else if (guess < ret)
//		{
//			printf("输入的数字小了\n");
//
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL)); //放着就好，只要生成一次就好，不必每次玩游戏都生成。
//	do
//	{
//
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);//input 输入为0 为假则退出循环；输入为非0 为真则继续循环。
//	return 0;
//}


//试一试：

//void menu()
//{
//	printf("**************************************\n");
//	printf("*******   1.start    0.exit   ********\n");
//	printf("**************************************\n");
//
//}
//
//void game()
//{
//	int guess = 0;
//	int ret = 0;
//	ret = rand() % 100 + 1;
//	
//	while (1)
//	{
//		printf("请输入数字\n");
//		scanf("%d", &guess);
//		if (ret < guess)
//		{
//			printf("输入的数大了\n");
//			
//		}
//		else if (ret > guess)
//		{
//			printf("输入的数小了\n");
//			
//		}
//		else
//		{
//			printf("恭喜你！你猜对了\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	menu();
//	srand((unsigned int)time(NULL));
//	
//	do
//	{
//		printf("请选择>:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//
//void meun()
//{
//	printf("*****************************************\n");
//	printf("*********   1.start   0.exit   **********\n");
//	printf("*****************************************\n");
//
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	while (1)
//	{
//		printf("请输入数字\n");
//		scanf("%d", &guess);
//		if (ret > guess)
//		{
//			printf("输入数字小了\n");
//
//		}
//		else if (guess > ret)
//		{
//			printf("输入数字大了\n");
//		}
//		else
//		{
//			printf("恭喜你！输入对了\n");
//			break;
//		}
//
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	meun();
//	srand((unsigned int)time(NULL));
//	do
//	{
//	
//		printf("请选择>: ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出游戏\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("输入错误，重新输入\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}