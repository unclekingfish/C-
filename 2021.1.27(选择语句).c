#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



//注释有两种风格：
//C语言风格的注释 /*xxxxxx*/
//缺陷：不能嵌套注释
//C++风格的注释 //xxxxxxxx
//可以注释一行也可以注释多行
//
//
///*int main()
//{
//	/*
//	printf("HELLO WORLD\n");
//	*/
//
//	return 0;
//}*/
//
//像上面代码那样我用/**/注释掉printf那段代码，但是当我想继续用/**/注释掉整段代码时，最后一段 * / 直接注释不了。
//但用 // 完全没问题。
//
//注释的快捷键：Ctrl+K+C  取消注释： Ctrl+K+U


int main()
{
	int input = 0;
	printf("看看你现在，一事无成\n");
	printf("要不要努力学习？(0,1)>:");
	scanf("%d", &input);
	if (input == 0)
	printf("考上大学去进修 \n");
	else 
		printf("在老家迷迷茫茫过一生 \n");
	return 0;
}


