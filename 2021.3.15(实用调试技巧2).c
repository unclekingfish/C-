#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	printf("hehe\n");
	int a = 20;
	int b = 10;
	int c = Add(a, b);

	return 0;
}

shift+F11  ����۲�ʱ���������
shift+F9   ���ټ���
shift+F5   ֹͣ����


int main()
{
	{
		int tmp = 0;
		printf("tmp=%d\n", tmp);
	}
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		arr[i] = i;
	}
	return 0;
}

vs2019  ����ѡ�
����ѡ��;
�Զ����ڣ��Զ��ѳ���ִ�е�ĳ��λ�õ������ļ�¼��ĳЩ���� ���Զ����������ݣ�
�ֲ����������Զ����ڲ�࣬�����ǽ��뺯���ڲ���ʱ����Զ��Ӽ�����    ���ǲ����Լ��������Լ��۲�
���ӣ� �Լ��ֶ��Ӽ���Ҫ���ӵı���
�ڴ棺 �ֶ������Ҫ�۲�������ڴ���Ϣ
�Ĵ������۲�Ĵ��������ݱ仯

���ö�ջ�����ľͷһ�����Ƚ����������ȳ�
���溯����������ִ�е�testʱ ���������ʾ�ļ���.exe!main(...)
Ȼ�����θ�test()����ʱ�����ö�ջ�ڶ��л���ʾ�ļ���.exe!test(...)
�Դ����ƣ���������ļ���.exe!test2(...);��������test2(...)ִ�����ȥ��
���ö�ջ��������ļ���.exe!test2(...)����ʧ ���Դ����ƣ�ִ��������������main����ʧ
void test2()
{
	printf("hehe\n");
}
void test1()
{
	test2();
}
void test()
{
	test1();
}
int main()
{
	test();
	return 0;
}


//��ס��Ҫʵ������ĵ��Դ���ѡ�Ҫ�Ȱ�F10�������

���õ��Բ��Դ��룺
int  main()
{
	int i = 0;
	int sum = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		int j = 0;
		for (j = 1;j <= i;j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}


���һ��һ�����ԱȽϴ죻�������öϵ� ����Ӷϵ㣬Ȼ���һ��ϵ�ѡ��"����"�����������"i==3"



int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0;i <= 12;i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	system("pause");
	return 0;
}