#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



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
void my_strcpy(char* dest, const char* src)//加const后代码写反会编译不过去
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


//继续优化
#include <assert.h>
void my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);//断言 
	assert(src != NULL);
	while (*src++ = *dest++)//代码写错，拷贝反了

	{
		;

	}

}
int main()
{
	char arr1[] = "###";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);//如果arr1等于NULL
	printf("%s\n", arr1);
	return 0;
}


int main()
{
	const int num = 10; // 即使int num加了const 但是num仍然能通过取地址 * p改num的值

	  const int* p = &num;//在int* p前加const则不能修改num的值，会报错“表达式必须是可修改的左值”
	                     
	  *p = 20;//err 
	  //const 放在指针变量的*左边时（const int* p），修饰的是*p，也就是说：不能通过p来改变*p;
	  //const 放在指针变量的*右边时（int* const p），修饰的是指针变量p本身，p不能被改变了
	  p = &n;
	  printf("%d\n", num);
	return 0;
}

最终优化：
#include <assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL); 
	assert(src != NULL);
	//把src指向的字符串拷到dest指向的空间，包含'\0'字符
	while (*src++ = *dest++)

	{
		;

	}
	return ret;
}
int main()
{
	char arr1[] = "#############";
	char arr2[] = "bit";
	
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}

//练习：模拟实现一个strlen函数 参考代码：
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);//保证指针的有效性
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
