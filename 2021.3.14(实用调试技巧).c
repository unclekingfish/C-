#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	for(a=0;a<100;a++)
	{
		printf("%d ", a);
	}
	system("pause");
	return 0;
	
}


test.c          ִ�г���
Debug           Debug �汾�Ŀ�ִ�г���         ���Ե��Եģ���Ϊ�ļ��а����˵�����Ϣ
Release         Release �汾�Ŀ�ִ�г���

Debug�汾�����ļ���Release�汾�����ļ�Ҫ����Ϊ������˵�����Ϣ�����Ҳ����κ��Ż����Ա��ڳ���Ա���Գ���

Release�汾�����ܽ���F10���Ե�

Relese��Ϊ�����汾 �����������˸����Ż���ʹ�ó����ڴ����ڴ�С�������ٶ��϶������ŵ�,�Ա��û��ܺõ�ʹ�á�
����Ա һ����Ե���Release�汾




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

����������� ����Debug�汾ʱִ�л���ѭ��  �������Release �汾ʱ��û�����ӡ��12��hehe




���Կ�ݼ���
F5-��������-��F9���ʹ�õ�
���-�ϵ� F9�л��ϵ�
int main()
{
	int i = 0;
	for(i=0;i<100;i++)
	{
		printf("%d ", i);
	}
	for (i = 0;i < 100;i++)
	{
		printf("%d ", 10-i);
	}
	
	return 0;
	
}