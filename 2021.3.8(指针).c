#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

ָ�룺ָ���Ǳ������������������ڴ浥Ԫ��ַ����ţ�


int main()
{
	int a = 10; //���ڴ��п���һ��ռ�
	int* p = &a;//�������ǶԱ���a,ȡ�����ĵ�ַ������ʹ��&������
	           //��a�ĵ�ַ�����p�����У�p����һ��ָ�������

	return 0;
}

�ܽ᣺ָ����Ǳ�����������ŵ�ַ�������������ָ���е�ֵ�������ɵ�ַ����


ָ���ָ�����ͣ�

int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*)); 
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(double*));
	return 0;                             //�������4 ���ֽ�
}


ָ��ΪʲôҪ�������ͣ�


int main()
{
	int a = 0x11223344;
	int* pa=&a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pa);
	//������ַһģһ��
	return 0;
}

int main()
{
	int a = 0x11223344;
	int* pa = &a;
	*pa = 0; //ͨ����ַ �� a��ֵ���0

	
	return 0;
}

int main()
{
	int a = 0x11223344;
	char* pc = &a;
	*pc = 0;
	//�ڴ������4 ���ֽڣ���һ���ֽڱ����0

	return 0;
}

ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С

int* p;  *p�ܹ�����4���ֽ�
char* p;  *p�ܹ�����1���ֽ�
double* p; *p�ܹ�����8���ֽ�


ָ��+-����

int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);  //008FF768  
	printf("%p\n", pa + 1);  //008FF76C   =008FF768 +4
	printf("%p\n", pc); //008FF768
	printf("%p\n", pc + 1); //008FF769  =008FF768 +1
	return 0;
}


ָ�����;����ˣ�ָ����һ���߶�Զ��ָ��Ĳ�����
int* p; p + 1-- > 4
char* p; p + 1-- > 1
double* p; p+1--> 8

int main()
{
	int arr[10] = { 0 };
	//int* p = arr;//������-��Ԫ�صĵ�ַ
	char* p = arr;
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		*(p + 1) = 1;
	}
	return 0;
}

int main()
{
	int a;//�ֲ���������ʼ����Ĭ�������ֵ
	int* p; //�ֲ���ָ��������ͱ���ʼ�����ֵ
	*p = 20;
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0;i < 12;i++)
	{
		p++;
	}
	return 0;
}

test()
{
	int a = 10; //a�Ŀռ���0x0012ff44 ���10
	return &a;  //����a�ĵ�ַ   
}   //����һ�������ռ�ͻ���ϵͳ��0x0012ff44�Ͳ���������ռ���
int main()
{
	int* p = test();  //p��������һ��ֵ 0x0012ff44 
	*p = 20;  //����ʹ�õ�ʱ��*pͨ��0x0012ff44��ַ�ҵ��� λ�ã���20�Ž�ȥ�ᷢ�ֲ���ԭ���Ǹ���ַ��
	return 0;
}