#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char str[] = "hello bit";
	printf("%d %d\n", sizeof(str), strlen(str));
	return 0;
}

//sizeof(str)= 10 //�ո�һ�� '\0'һ�� ����10
//strlen(str)=9   //�ո�һ�� ����9



�������¶��壺
char acX[] = "abcdefg";
char acY[] = { 'a','b','c','d','e','f','g' };
����˵����ȷ����( C )
A.����acX������acY�ȼ�
B.����acX������acY������ͬ
C.����acX�ĳ��ȴ�������acY�ĳ���
D.����acX�ĳ���С������acY�ĳ���

������acX���и�'\0'


����һ���������飬��ɶ�����Ĳ���
1.ʵ�ֺ���init()��ʼ������Ϊȫ0
2.ʵ��print()��ӡ�����ÿ��Ԫ��
3.ʵ��reverse()�����������Ԫ�ص�����
Ҫ���Լ�������Ϻ����Ĳ���������ֵ

void Init(int arr[] ,int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		arr[i] = 0;
	
	}
}
void Print(int arr[],int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while(left<right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--; //������д����++������
	}
		
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//Init(arr,sz);//�������ʼ��Ϊ0
	Print(arr,sz);//��ӡ
	Reverse(arr,sz);
	Print(arr, sz);//��ӡ
	return 0;
}


��Ŀ��������A�е����ݺ�B�����е����ݽ��н�����(����һ����)


int main()
{
	int A[5] = { 1,2,3,4,5 };
	int B[5] = { 6,7,8,9,0 };
	int tmp = 0;
	int i = 0;
	int sz = sizeof(A) / sizeof(A[0]);
	for (i = 0;i < sz;i++)
	{
		tmp = A[i];
		A[i] = B[i];
		B[i] = tmp;

	}
	return 0;
}