#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>

int main()
{
	//�ַ�������־�ǡ�/0��
	//"abcd"���ַ���
	//'\0' ��ת���ַ� --���Ӧ��ASCII��ֵ�� ʮ�������� 0��
	// 0 ������
	//��0���� �����ַ�  --���Ӧ��ASCII��ֵ�� ʮ�������� 48��
	//'a�� 'v�� ����ĸ�ַ�

	//EOF -end of file -�ļ�������־ �������ֵ��-1����һ��
	return 0;
}


���������Ľϴ�ֵ

�Լ�˼���ģ�

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d",&a,&b);
	

	if (a < b)
	{
		printf("%d\n", b);

	}
	else
		printf("%d\n",a);
	return 0;
}


��1��

int main()
{
	int a = 10;
	int b = 20;
	if (a > b)
		printf("�ϴ�ֵ= %d\n", a);
	else
		printf("�ϴ�ֵ =%d\n", b);
	return 0;
}


int Max(int x,int y)
{
	if (x < y)
	return y;
	else
    return x;
}

int main()
{
	int a = 20;
	int b = 30;
	int max = Max(a, b);
	printf("�ϴ�ֵ= %d\n", max);
	return 0;
}