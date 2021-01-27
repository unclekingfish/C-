#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

转义字符： 就是把原来的字符的意思转换了

int main()
{ 
	printf("abc\n");//如果直接加n,那就是直接abcn但是加\n就成了转行的意思了。

	return 0;
}



int main()
{
	printf("c:\test\32\test.c"); //
	// \t —水平制表符（就是键盘上的TAB键，文档上打出就是一大串空白）
	return 0;
}




int main()
{
	printf("(Rre you ok??)\n");
	//在vc++6.0这种古老的编译器上会打印出（Are you ok] 这个字符串。
	//这是因为老编译器打“ ？？）”—这叫三字母词。
	//这种情况可以加 “\” 转意字符。
	//这好是printf("(Rre you ok\?\?)\n");

	return 0;
}




int main()
{
	//prntf("c:\test\32\test.c");
	//想正确打印上面的字符串，可以使用反斜杠\\-防止它被解释为转意序列符。
	printf("c:\\test\\32\\test.c");
	return 0;
}


例子

int main()
{
	/*printf("%c", '\'');*/
	/*printf("%s", "abc");*/
	/*printf("%s", "a");*/
	/*printf("%s","\"");*/

	return 0;
}


int main()
{
	printf("%d\n", strlen("c:\test\32\test.c"));

	printf("\32");//如果输出是方块的话 则”win10输出不了的，解决方法终端边框右键属性字体换成点阵字体就行了“
	
				  //代码输出结果是13 ，怎么算的？ 字母数字符号都算一个，但是\t经过转意他是制表键TAB相当于8个空格，这两个元素相当于没有。
	//  \32  它是 \ddd 形式的转意字符 ddd表示1~3个八进制的数字。那么32就是两个8进制数字转化为十进制就是 24+2=26  26在ASCII码表就是代表 一个向右的箭头	相当于一个字符。
	
	//所以经过计算是13

	return 0;
}



int main()
{
	printf("%c\n", '\x61');
	// \x61 是\xdd 模式 dd表示2个十六进制数字 如 ：\x30 0
	// \x61 6*16^1+1*16^0=97   97在ASCII码表则是a 

	return 0;
}

