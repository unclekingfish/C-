#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


һά����Ĵ����ͳ�ʼ����

������һ����ͬ����Ԫ�صļ��ϡ�
������ʽ��

type_t   arr_name[const_n];
//type_t ʵ�������Ԫ������
//const_n ��һ���������ʽ������ָ����Ĵ�С��


int main()
{
    //����һ������-�������-10��
	int arr[10];
	char arr2[5]
		//����һ������-����ַ�-5��
		int a = 5;
	char ch[a]; //err   const_nΪ�������ʽ
	return 0;
}

����ĳ�ʼ����
�ڴ��������ͬʱ�����������һЩ�����ʼֵ����ʼ������

int main()
{
	int arr[10] = { 1,2,3 }; //����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	char arr2[5] = { 'a','b' };
	char arr2[5] = { 'a',98 }; //����������arr2����һ��
	char arr3[5] = "ab";//ok
	char arr4[] = "abcdef"; //arr4 ������� a b c d e f 0
	printf("%d", sizeof(arr4)); //7  size -��\0
	//sizeof ���� arr4��ռ�ռ�Ĵ�С
	//7��Ԫ��-char 7*1 =7
	printf("%d", strlen(arr4));//6  strlen -������\0
	//strlen ���ַ����ĳ���-'\0'֮ǰ���ַ�����
	//[a b c d e f \0]
	return 0;
}

1.strlen �� sizeof ûʲô����
2.strlen �����ַ������ȵ�-ֻ������ַ����󳤶�-�⺯��-ʹ�õ�����ͷ�ļ�<string.h>
3.sizeof �������,���飬���͵Ĵ�С����λ���ֽڡ�������


int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr1));//4    ռ��4���ֽڵĴ�С
	printf("%d\n", sizeof(arr2));//3    ռ��3���ַ��Ĵ�С
	printf("%d\n", strlen(arr1));//3    '\0'֮ǰ���ַ�����
	printf("%d\n", strlen(arr2));//15   arr2 û��\0 �����ҵ�\0ʱ�Ž��� �����������ֵ
	return 0;
}

arr1   a b c \0

arr2   a b c  


һ�������ʹ��

int main()
{
	char arr[] = "abcdef"; //[a] [b] [c] [d] [e] [f] [\0]
	printf("%c\n", arr[3]);
	int i = 0;
	for (i = 0;i < 6;i++)
	{
		printf("%c", arr[i]);
	}
	for (i = 0;i <(int)strlen(arr);i++)  
	{
		printf("\n%c", arr[i]);
	}
	int len = strlen(arr);
	for (i = 0;i < len;i++)
	{
		printf("%c ", arr[i]);
	}
	return 0;
}


int  main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

int  main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("&arr[%d] =%p\n", i, &arr[i]);
	}
}

& arr[0] = 005AFD70    
& arr[1] = 005AFD74   //���4
& arr[2] = 005AFD78   //���4
& arr[3] = 005AFD7C   //16���� c����12  �������4
& arr[4] = 005AFD80   //���4
& arr[5] = 005AFD84      .
& arr[6] = 005AFD88      .
& arr[7] = 005AFD8C      .
& arr[8] = 005AFD90      .
& arr[9] = 005AFD94      .

���������ڴ�����������ŵģ� �͵�ַ��������>�ߵ�ַ

int main()
{
	int arr[3][4] = {1,2,3,4,5 }; //3��4��  ��һ�з�1 2 3 4 ���ڶ�����5 0 0 0  ����������0 0 0 0 
	//��ΰ�123�ŵ�һ�У�45�ŵڶ���
	int arr1[3][4] = { {1,2,3},{4,5} };   //��һ�з� 1 2 3 0 ���ڶ��з� 4 5 0 0 �������з�0 0 0 0 
	//int arr[] = { 1,2,3,4 };
	//int arr2[][] = { { 1,2,3,4 },{ 5, 6, 7, 8 } };//err arr2ȱ���±�
	int arr2[3][4]={ { 1,2,3,4 },{ 5, 6, 7, 8 } };
	int arr3[3][] = { { 1,2,3,4 },{ 5, 6, 7, 8 } };// err arr3ȱ���±� ���Ǿ��Բ���ʡ�Ե�
	int arr4[][4] = { { 1,2,3,4 },{ 5, 6, 7, 8 } };  //ok //���ǿ���ʡ�ԣ����ǲ���ʡ�Ե�
	char ch[5][6]; 
}


int main()
{
	int arr[3][4] = { { 1,2,3 }, { 4,5 } };
	//1 2 3 0
	//4 5 0 0
	//0 0 0 0
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		int j = 0;
		for (j = 0;j < 4;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

//��ά�������ڴ��еĴ洢

int main()
{
	int arr[3][4] = { { 1,2,3 }, { 4,5 } };

	int i = 0;
	for (i = 0;i < 3;i++)
	{
		int j = 0;
		for (j = 0;j < 4;j++)
		{
			printf("&arr[%d][%d]%p\n ",i,j, &arr[i][j]);
		}
		
	}

	return 0;
}

& arr[0][0]004FF8B4     ��һ��
& arr[0][1]004FF8B8    
& arr[0][2]004FF8BC
& arr[0][3]004FF8C0
 
& arr[1][0]004FF8C4     �ڶ���
& arr[1][1]004FF8C8
& arr[1][2]004FF8CC
& arr[1][3]004FF8D0

& arr[2][0]004FF8D4     ������
& arr[2][1]004FF8D8
& arr[2][2]004FF8DC
& arr[2][3]004FF8E0
 
����������������еģ�����������һ������������

&arr[0][0]004FF8B4  &arr[0][1]004FF8B8  &arr[0][2]004FF8BC  &arr[0][3]004FF8C0  &arr[1][0]004FF8C4 ..... &arr[2][3]004FF8E0


        int arr[3][4]
---------------------------->
 arr[0]     arr[1]     arr[2]
��������   ��������   ��������
arr[0][j]  arr[1][j]  arr[2][j]