#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
������Ϊ��������
ð������
10 9 8 7 6 5 4 3 2 1 //������������Ԫ�ص�����
9 10 8 7 6 5 4 3 2 1
9 8 10 7 6 5 4 3 2 1       һ��ð������
9 8 7 10 6 5 4 3 2 1
...
9 8 7 6 5 4 3 2 1 10                                  


8 9 7 6 5 4 3 2 1 10       
8 7 9 6 5 4 3 2 1 10        ����ð������
....
8 7 6 5 4 3 2 1 9 10

10��Ԫ��   n 
9��ð������  n-1

void bubble_sort(int arr[] ,int sz)
{
	//ȷ��ð�����������
	int i = 0;
	 //����sz=10 
	
	for (i = 0;i < sz - 1;i++)
	{
		//ÿһ��ð�ݳ���
		int j = 0;
		int flag = 1; //������һ��Ҫ����������Ѿ�����
		for (j = 0;j <sz-1-i ;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//���������������ʵ����ȫ����
			}

		}
		if(flag == 1)
		{
			break;//���break ��������forѭ�����棬����ϵ�Ҳ��for��ѭ��
		}
	}


}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��arr���������ų�����
	//arr�����飬���Ƕ�����arr���д��Σ�ʵ�ʴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ &arr[0]
	bubble_sort(arr ,sz);//ð��������
	for(i=0;i<sz-1;i++)
	{ 
		printf("%d ",arr[i]);
		}
	return 0;

}



int main()
{
	if (1)
		break;     // break���ֻ����for��swich����if����в���ʹ�ã���Ϊif ����ѭ����䣬������break������
  
	return 0;
}


��������ʲô?  ��Ԫ�صĵ�ַ���������⣩
int main()
{
	int  arr[] = { 1,2,3,4,5,6,7 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);  //�������һ��
	printf("%d\n", *arr);  //�����1
	return 0;
}



int main()
{
	int  arr[] = { 1,2,3,4,5,6,7 };
	printf("%p\n", arr);  //012FFB10  ��Ԫ�ص�ַ
	printf("%p\n", arr+1);  //012FFB14  ��Ԫ�ص�ַ+4
	printf("%p\n", &arr[0]); //012FFB10  ��Ԫ�ص�ַ
	printf("%p\n", &arr[0]+1);//012FFB14  ��Ԫ�ص�ַ+4
	printf("%p\n", &arr);  //012FFB10    ����������ĵ�ַ
	printf("%p\n", &arr+1);// 012FFB2C   �Ա�����ĵ�ַ ���=+28   7��Ԫ��
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//���⣺
	//1.sizeof���������� - ��������ʾ�������飬sizeof�������������������������Ĵ�С����λ���ֽ�
	//2. &�������������������������飬&��������ȡ��������������ĵ�ַ
	return 0;
}
