#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>  //stdlib -standard library

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int b = 7;
	int left = 0;
	int  sz = sizeof(a) / sizeof(a[0]);
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (right + left) / 2;
		if (a[mid] > b)
		{
			right = mid - 1;
		}
		else if (a[mid] < b)
		{
			left = mid + 1;
		}
		else 
		{
			printf("���ֵ��±��� %d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("�Ҳ���");

	}
	return 0;

}

��Ŀ4��
��д���룬��ʾ����ַ��������ƶ������м��ۡ�

˼·�������ַ�����ÿ���໥�������������˵��ַ���ֱ����ȫ������ɡ�
�ַ���1��welcome to world!!!
�ַ���2��###################
ÿ���ַ���1���ַ���2����2���ַ�����������ң�ֱ���ַ���2��ȫ�滻���ַ���1��

int main()
{
	char char1[] = { "welcome to world!" };
	char char2[] = { "#################" };
	int left = 0;
	//int right = sizeof(charr1) / sizeof(charr1[0]) - 2;  //�����ַ��������ַ����±���ʱ,�����ַ������һ���ַ��ǡ�\0' ,
														 //Ҳ����˵��ʵcharr1�ַ����ģ����±�����ʵ���ַ�����-2(�±�����ʼֵ��0��
	int right = strlen(char1) - 1;  //strlen �����ַ���Ԫ�ظ����ǲ����㡯0����
	while (left <= right)
	{

	char2[left] = char1[left];
	char2[right] = char1[right];
	printf("%s\n", char2);
	Sleep (1000); //��ӡ����Ϣ1�루������ĵ�λ���룩 ��Ҫ����ʹ��<windows.h>�ļ�
	system("cls");//ִ��ϵͳ�����һ������;cls -�����Ļ(clear screen)  ��Ҫ����ʹ��<stdlib.h>�ļ�
	left++;
	right--;
	
}
	printf("welcome to world!");
	return 0;
}


��Ŀ5��
��д����ʵ�֣�ģ���û���½����������ֻ�ܵ�½3�Ρ���ֻ���������������룬���������ȷ����ʾ
��½�ɹ���������ξ�����������˳�����

int main()
{
	char password[10] = { 0 };
	
	int i= 0;
	//printf("���������룺>");
	//scanf("%s", password);    Ӧ���Ƿ���for ѭ���ڲſ��ԣ���Ȼ����һ�δ���ֱ��3�ζ����ˡ�
	for (i = 0;i < 3;i++)
	{
		printf("���������룺>");
		scanf("%s", password);
		//if (password == "123456") //������==�������ں����Ƚ������ַ����Ƿ���ͬ��Ӧ��ʹ�ÿ⺯�� strcmp-string compare
		//������ʽΪstrcmp(str1,str2)����str1=str2���򷵻��㣻��str1<str2���򷵻ظ�������str1>str2���򷵻�������
		if (strcmp(password,"123456")==0)
		{
			printf("������ȷ\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}

	if (i == 3)
		printf("3������������󣬽��˳�����\n");
			
	return 0;
}

