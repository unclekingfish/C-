#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//
//int main()
//{
//	double num0 = 0;
//	double num1 = 0;
//	double sum = 0;
//	scanf("%lf%lf", &num0, &num1);
//	sum = num0 + num1;
//	printf("sum = %lf\n", sum);
//	return 0;
//
//}
//
//int main()
//{
//	char arr[5] = { 0 };//5个字符
//	scanf("%s", arr);//输入超过5个字符？
//	printf("%s\n", arr);
//
//	return 0;//讲道理这个代码我有点懵
//}

int main()
{
	char arr[10] = { 0 };
	strcpy(arr, "hello");
	printf("%s", arr);
	return 0;
}






//当使用某些函数比如scanf时会出现c4996警告，这种情况有3种解决方法：

//1.在代码的最开始加上#define _CRT_SECURE_NO_WARNINGS 

//2.使用scanf_s 函数代替（应该时可以在出问题的函数后面加_s就行）
//方法2，按我现在理解，它会把你输入溢出的数据存储到其他地方，占用其他空间，却能让程序正常运行。
//scanf_s的参数有3个：1.格式字符串，就是双引号里的%*  2.时输入地址，就是&* 
//前两个和scanf一样，但在输入字符串时，scanf会出现字符数大于字符串长度的情况，导致多出来的字符被写入其他空间，就是微软说的“不安全”
//所以多了3.是一个整形数据，意义为输入字符串的最大长度

//3.在VS的安装路径下搜索： newc++file.cpp文件，打开文件加上：#define _CRT_C=SECURE_NO_WARNINGS 1
//以后创建新的.c文件中都会自动有这句代码。(我试过，用Notepad++打开并加上保存，但新开的.c文件还是没有这句代码）

//4.右击点开工程文件的属性选项里的C/C++的预处理器选项，第一行预处理器定义的代码后面添加;#define _CRT_SECURE_NO_WARNINGS(前面带分号的） 

//5.新建项目时，不点空项目点Win32控制台应用程序，然后点下一步，去掉安全开发生命周期（SDL）检查，然后点空项目，完成。
//新项目创建完成，新建.c文件。当你写完代码运行时，同样会出现警告，但是它只是警告，程序还是能运行。
