#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//vc6.0环境下 <=10就死循环了
	//gcc编译器 <=11就死循环了
	//vs2013  <=12死循环
	for (i = 0;i <= 12;i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	system("pause");
	return 0;
}//死循环打印hehe


栈区：
高地址




低地址


1.栈区的默认使用：
先使用高地址处的空间
再使用低地址处的空间

2.数组随着下标的增长
地址是由低到高变化


上面这段代码  栈区先使用高地址处的空间在使用低地址处的空间，所以我们创建空间时先创建arr的空间再创建i的空间
arr下标从0 - 9在栈区开辟10个空间 而当i = 10时 ，arr = 0是超出arr在栈区开辟的10空间，他会向上叠加，而当i = 12时就有可能i在栈区开辟空间的地址与arr[12]的地址想同。调试显示也确实如此。

如果上面代码改为i <= 11 则运行代码会报错说栈溢出，如果改i <= 15, 则也是死循环。

int main()
{

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	//arr 与 i位置交换
	for (i = 0;i <= 12;i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	system("pause");
	return 0;
}//虽然不会死循环，但是会报栈溢出问题 


//模拟实现库函数：strcpy
void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
}
int main()
{
	char arr1[]= "#############";
	char arr2[]= "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


//优化：
void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*dest++= *src++;
	
	}
	*dest = *src;
}
int main()
{
	char arr1[] = "#############";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


//继续优化：
void my_strcpy(char* dest, char* src)
{
	if (dest != NULL && src != NULL)//当传送的是空指针的时候是，我们用NULL也不至于程序错位，只是不执行
	{
		while (*dest++ = *src++)
			//当*src='\0'时 他的ASCII码值为0 ，而0为假，则跳出循环
		{
			;

		}
	}
}
int main()
{
	char arr1[] = "#############";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);//如果arr1等于NULL
	printf("%s\n", arr1);
	return 0;
}

//上面的程序虽然能执行，当时它出问题时它没有指出错误的地方，总之就是还可以优化

#include <assert.h>
void my_strcpy(char* dest, char* src)
{
	assert(dest != NULL);//断言  如果括号里的表达式为假，真报错 ；表示为真，没问题
	assert(src != NULL);
		while (*dest++ = *src++)
			
		{
			;

		}
	
}
int main()
{
	char arr1[] = "#############";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);//如果arr1等于NULL
	printf("%s\n", arr1);
	return 0;
}