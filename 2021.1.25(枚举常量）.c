#define _CRT_SRCURE_NO_WARNINGS
#include <stdio.h>





//枚举常量 ：一一列举的常量
//比如说：性别（男，女，保密）；三原色（红，黄，绿）；星期（1，2，3，4，5，6，7）
//枚举关键 —— enum

//enum Sex
//{
//	Male,
//	Female,
//	Secret
//};
////Male,Female,Secret -枚举常量
//int main()
//{
//	/*enum Sex s = Female;*/
//	printf("%d\n", Male);
//	printf("%d\n", Female);
//	printf("%d\n", Secret);
//	return 0;
//}


enum Colour
{
  Red,
  Yellow,
  Blue
};

int main()
{
	enum Colour c = Blue;// enum Colour是枚举常量 ，c是一个符号，c到底是什么颜色？给一个值Blue
	c= Yellow; //注意c是随时可以改的，只要是列举的数据就行。
	//Blue = 4 //这个是不行的，因为Red上面等于0，Yellow等于1，Blue等于2（用鼠标放在上面可以显示被赋的值），枚举常量是不能改的。
	printf("%d\n",c );
	return 0;
}

//还是会打出/n这样的错误，每次都忘了是\n(反斜杠）

//“mian”？今天找了15分钟的这样的傻逼错误。main(英文是主要的意思）主函数！

//枚举函数，据我现在的理解就是
//在主函数main之前 用enum + 名称 + {一一写出需要列举的数据}+ ; 另外里面的数据会赋予0，1，2...
//在局部变量要用到时就用enum +名称 +符号 + = +赋值

//现在只是了解在用枚举常量时需要在main函数前写好，等到局部变量里具体使用比如打印出字符还是不会。





