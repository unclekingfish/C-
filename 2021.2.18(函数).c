#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int is_prime(int x)
{
	//
	int y = 0;
	for (y = 2;y <= sqrt(x);y++)   //����2-n������ȥ%y
	{
		if(x%y==0)
		return 0;
	}
	//if(y==x)  ���һ��
	return 1;
}
int main()
{
	//��100��200֮�������
	int a = 0;
	for (a = 100;a <= 200; a++)
	{
		
		if (is_prime(a) == 1)
			printf("%d ", a);
	}
	
	return 0;
}


 2.дһ�������ж�һ���ǲ�������
�Լ�����

int is_leap_year(int a)
{
	//if ((a % 4) == 0 && (a % 100) == 0) err  
	if (a % 4 == 0 && a % 100 != 0)
	{
		return 1;
	}
	else if  (a % 400 == 0)
	{
		return 1;
	}
	else
		return 0;
}

int main()
{
	//��Ӧ1000 - 2000֮�������
		int year = 0;
	for (year = 1000;year <= 2000;year++)
	{
		//�ж�year�Ƿ�Ϊ����
		if (is_leap_year(year) == 1)
		{
			printf("%d  ", year);
		}
	}
	return 0;
}



int is_leap_year(int a)
{
	if (((a % 4) == 0 && (a % 100) != 0) || (a % 400 == 0))
	{
		return 1;
	}
	else
		return 0;
}


int main()
{
	//��Ӧ1000-2000֮�������
	int year = 0;
	for (year = 1000;year <= 2000;year++)
	{
		//�ж�year�Ƿ�Ϊ����
		if (is_leap_year(year) == 1)
		{
			printf("%d  ", year);
		}
	}
	return 0;
}


3.дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�

   ��һ�����������в��Ҿ����ĳ����
  ����ҵ��˷��أ���������±ꡣ�Ҳ����ķ���-1
 �Լ���
int search_number(int x, int y)
{
	
	int i = 0;
	int left = 0;
	int mid = 0;
	int sz = x / x[0];
	int right = sz - 1;
	
	for (i = 0;i < sz;i++)
	{
		mid = (right + left) / 2;

		if (x[mid] > x)
		{
			right = mid - 1;

		}
		else if (x[mid] < x)
		{
			left = mid + 1;
		}
		else if (x[mid] == x)
		{
			mid = y;
			return y;
			
		}
	}
}
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10,11 };
	int b = 7;
	int c = 0;
	search_number(b,c);
	printf("������������±�Ϊ %d\n", c);

	return 0;
}err



//�𰸣�
int binary_search(int x[] ,int y ,int sz)  // int x err /int x[]��ʾ����
{
	int left = 0;
	
	//int sz = sizeof x / sizeof x[0];  //��ס��sizeof ���С
    //x[] main����������ڽ��д��͵���������󣬲����ʾȫ�����飬��������ĵ�һ����ֵ����������Ҳ˵����1��
	//x[0] ��main�������ȥ�����1,  1/1=1  int sz=1;
	int right = sz - 1;
	
	while (left <=right)
	{
		int mid = (left + right) / 2;
		if (x[mid] > y)

		{
			right = mid - 1;
		}
		else if (x[mid] < y)
		{
			left = mid + 1;
		}
		else 
		{
			return mid;
		}
	}
	return -1;
}
int main()

{
	//��һ�����������в��Ҿ����ĳ����
	//����Ҵ��˷��أ���������±ꡣ�Ҳ�������-1
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
	int a = 7;
	int sz = sizeof arr / sizeof arr[0]; //������Ͳ��ᷢ��sz=1�����
	int set = binary_search(arr, a ,sz);
	                                     //���ݹ�ȥ��������arr��Ԫ�صĵ�ַ��
	if (set == -1)
		printf("�Ҳ��������\n");
	else
		printf("��������±���%d", set);

		return 0;


}