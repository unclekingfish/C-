#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//vc6.0������ <=10����ѭ����
	//gcc������ <=11����ѭ����
	//vs2013  <=12��ѭ��
	for (i = 0;i <= 12;i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	system("pause");
	return 0;
}//��ѭ����ӡhehe


ջ����
�ߵ�ַ




�͵�ַ


1.ջ����Ĭ��ʹ�ã�
��ʹ�øߵ�ַ���Ŀռ�
��ʹ�õ͵�ַ���Ŀռ�

2.���������±������
��ַ���ɵ͵��߱仯


������δ���  ջ����ʹ�øߵ�ַ���Ŀռ���ʹ�õ͵�ַ���Ŀռ䣬�������Ǵ����ռ�ʱ�ȴ���arr�Ŀռ��ٴ���i�Ŀռ�
arr�±��0 - 9��ջ������10���ռ� ����i = 10ʱ ��arr = 0�ǳ���arr��ջ�����ٵ�10�ռ䣬�������ϵ��ӣ�����i = 12ʱ���п���i��ջ�����ٿռ�ĵ�ַ��arr[12]�ĵ�ַ��ͬ��������ʾҲȷʵ��ˡ�

�����������Ϊi <= 11 �����д���ᱨ��˵ջ����������i <= 15, ��Ҳ����ѭ����

int main()
{

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	//arr �� iλ�ý���
	for (i = 0;i <= 12;i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	system("pause");
	return 0;
}//��Ȼ������ѭ�������ǻᱨջ������� 


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
void my_strcpy(char* dest, char* src)
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