#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//ģ��ʵ�ֿ⺯����strcpy
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


//�Ż���
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


//�����Ż���
void my_strcpy(char* dest, char* src)
{
	if (dest != NULL && src != NULL)//�����͵��ǿ�ָ���ʱ���ǣ�������NULLҲ�����ڳ����λ��ֻ�ǲ�ִ��
	{
		while (*dest++ = *src++)
			//��*src='\0'ʱ ����ASCII��ֵΪ0 ����0Ϊ�٣�������ѭ��
		{
			;

		}
	}
}
int main()
{
	char arr1[] = "#############";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);//���arr1����NULL
	printf("%s\n", arr1);
	return 0;
}

//����ĳ�����Ȼ��ִ�У���ʱ��������ʱ��û��ָ������ĵط�����֮���ǻ������Ż�

#include <assert.h>
void my_strcpy(char* dest, const char* src)//��const�����д������벻��ȥ
{
	assert(dest != NULL);//����  ���������ı��ʽΪ�٣��汨�� ����ʾΪ�棬û����
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
	my_strcpy(arr1, arr2);//���arr1����NULL
	printf("%s\n", arr1);
	return 0;
}


//�����Ż�
#include <assert.h>
void my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);//���� 
	assert(src != NULL);
	while (*src++ = *dest++)//����д����������

	{
		;

	}

}
int main()
{
	char arr1[] = "###";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);//���arr1����NULL
	printf("%s\n", arr1);
	return 0;
}


int main()
{
	const int num = 10; // ��ʹint num����const ����num��Ȼ��ͨ��ȡ��ַ * p��num��ֵ

	  const int* p = &num;//��int* pǰ��const�����޸�num��ֵ���ᱨ�����ʽ�����ǿ��޸ĵ���ֵ��
	                     
	  *p = 20;//err 
	  //const ����ָ�������*���ʱ��const int* p�������ε���*p��Ҳ����˵������ͨ��p���ı�*p;
	  //const ����ָ�������*�ұ�ʱ��int* const p�������ε���ָ�����p����p���ܱ��ı���
	  p = &n;
	  printf("%d\n", num);
	return 0;
}

�����Ż���
#include <assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL); 
	assert(src != NULL);
	//��srcָ����ַ�������destָ��Ŀռ䣬����'\0'�ַ�
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

//��ϰ��ģ��ʵ��һ��strlen���� �ο����룺
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);//��ָ֤�����Ч��
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
