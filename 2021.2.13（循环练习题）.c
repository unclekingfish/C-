#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>  //stdlib -standard library

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int b = 7;
	int left = 0;
	int  sz = sizeof(a) / sizeof(a[0]);
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (right + left) / 2;
		if (a[mid] > b)
		{
			right = mid - 1;
		}
		else if (a[mid] < b)
		{
			left = mid + 1;
		}
		else 
		{
			printf("数字的下标是 %d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("找不到");

	}
	return 0;

}

题目4：
编写代码，演示多个字符从两端移动，向中间汇聚。

思路：两个字符串，每次相互交换各自最两端的字符，直到完全交换完成。
字符串1：welcome to world!!!
字符串2：###################
每次字符串1向字符串2交换2个字符（最左和最右）直到字符串2完全替换成字符串1。

int main()
{
	char char1[] = { "welcome to world!" };
	char char2[] = { "#################" };
	int left = 0;
	//int right = sizeof(charr1) / sizeof(charr1[0]) - 2;  //计算字符串最右字符的下标数时,由于字符串最后一个字符是‘\0' ,
														 //也就是说真实charr1字符串的！号下标数其实是字符串数-2(下标数初始值是0）
	int right = strlen(char1) - 1;  //strlen 计算字符串元素个数是不计算’0‘的
	while (left <= right)
	{

	char2[left] = char1[left];
	char2[right] = char1[right];
	printf("%s\n", char2);
	Sleep (1000); //打印后休息1秒（括号里的单位毫秒） 需要申明使用<windows.h>文件
	system("cls");//执行系统命令的一个函数;cls -清空屏幕(clear screen)  需要申明使用<stdlib.h>文件
	left++;
	right--;
	
}
	printf("welcome to world!");
	return 0;
}


题目5：
编写代码实现，模拟用户登陆场景，并且只能登陆3次。（只允许输入三次密码，如果密码正确则提示
登陆成功，如果三次均输入错误，则退出程序。

int main()
{
	char password[10] = { 0 };
	
	int i= 0;
	//printf("请输入密码：>");
	//scanf("%s", password);    应该是放在for 循环内才可以，不然输入一次错误直接3次都错了。
	for (i = 0;i < 3;i++)
	{
		printf("请输入密码：>");
		scanf("%s", password);
		//if (password == "123456") //不能用==两个等于号来比较两个字符串是否相同，应该使用库函数 strcmp-string compare
		//基本形式为strcmp(str1,str2)，若str1=str2，则返回零；若str1<str2，则返回负数；若str1>str2，则返回正数。
		if (strcmp(password,"123456")==0)
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}

	if (i == 3)
		printf("3次密码输入错误，将退出程序\n");
			
	return 0;
}

