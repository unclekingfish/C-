#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//��ϰ��
//4.дһ��������ÿ����һ������������ͻὫnum��ֵ����1

int Add(int* p) 
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n",num);
	Add(&num);
	printf("%d\n", num);
	return 0;
}

