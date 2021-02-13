#define _CRT_SECURE_NO_WARNINGS //一定加在源文件的第一行

#include <stdio.h>

int main()
{
    float  weight0=0;
	float  weight1 = 0;
	float sum = 0;
		 scanf("%f%f", &weight0, &weight1);
	 sum = weight0 + weight1;

	 printf("%f\n", sum);
	
	
	return 0;
}//scanf这个函数是C语言提供的，而scanf_s这个函数是VS编辑器提供的，如果使用scanf_s这个函数后当我们在其他编译器编译时就不能成功编译了



int main()
{

	float num = 0;
	scanf("%f", &num);
	printf("%f\n", num);
	return 0;
}


int main()
{
	//const - 常属性
	const int num = 6;  //这时候num是const所修饰的常变量，num是常量但num本质是变量
	//int num = 6   num是变量
	printf("%d\n", num);
	num = 2;
	printf("%d\n", num);

	//字面常量就是我们直观写出来的数值比如 2， 3.34 ，100
	return 0;
}




int main()
{
	const int n = 10;
	int arr[n] = { 0 };//n是变量，但是又有常属性，所以说n是常变量
	//终于搞明白了int arr[4]={0}这代码的意思： 定义一个整形数组，长度为4，全部初始化为0 ，int arr[4]={0，0，0，0}
    //这么说[]中应该输入一个常量
	return 0;

}



让我想想
int main()
{
	int num[] = {0};
	printf("%d\n", num);
	return 0;
}//还是想不通




//第3种 #define 定义的标识符常量
#define Max 10
int main()
{
	int num[Max] = {0};
	printf("%d\n", Max);
	return 0;
}