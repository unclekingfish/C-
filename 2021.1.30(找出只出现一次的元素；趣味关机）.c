#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>//system

�ҳ�ֻ����һ�ε���
���棺����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�γ��⣬����ÿ��Ԫ�ؾ��������Σ��ҳ��Ǹ�ֻ����һ�ε�Ԫ�ء�
������int a[] = { 1,2,3,4,5,1,2,3,4 }����������ֻ��5����һ�Σ��������ֶ��ǳɶԣ��ҳ�5

������
int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	//�ҳ�������
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr)[0]; //arr�����������δ�С����arr����Ԫ�صĴ�С=�����Ԫ�ظ���
	/*printf("%d", sz);*/
	for (i = 0;i < sz;i++)
	{
		//ͳ��arr[i]��arr��������˼���
		int count = 0;
		int j = 0;
		for (j = 0;j < sz;j++)
		{
			if (arr[i] == arr[j])
				{
				count++;
			   }
		}
		if (count == 1)
	{
	    printf("������%d\n", arr[i]);
		break;
}
		}
	
	return 0;
}

���װ�

3^3=0
5^5=0
a^a=0
0^5=5
0^3=3
0^a=a
3^5^3=5
3^3^5=5
�����ͬΪ0����ͬΪ1���������㽻���ʵ�

int main()
{
	1 1 2 2 3 3 4 4 5
	1^1^2^2^3^3^4^4^5
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	int i = 0;
	int ret=0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	for (i = 0;i<sz;i++)
	{
		ret = ret^arr[i];

	}
	printf("%d\n", ret);

	return 0;
}




int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 180");
	again:
	printf("���Խ�����3�����ڹػ�������������������ְ֡����ԲŻ�ȡ���ػ�");
		scanf("%s", arr);
		if (strcmp(arr,"������ְ�")==0)//strcmp -��string compare
		{
			system("shutdown -a");
		}
		else 
        {
			goto again;
		}
	return 0;
}



int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 120");// ����- s ��-s; -tͬ��
	again:
	printf("�����������Ȼ�͹������");
	scanf("%s",arr);
		if (strcmp(arr,"������")==0)
		{
			system("shutdown -a");

	}
		else
		{
			goto again;
		}
	return 0;
}