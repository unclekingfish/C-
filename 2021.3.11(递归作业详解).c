#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


���ڵݹ������������ǣ�C ��
A.���������������������������������ʱ�򣬵ݹ�㲻�ټ���
B.ÿ�εݹ����֮��Խ��Խ�ӽ������������
C.�ݹ�������޵ݹ���ȥ
D.�ݹ���̫������ջ���


ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
�磺����9�����9*9�ھ�������12�����12*12�ĳ˷��ھ���

void print_table(int n)
{
	int i = 0;
	for (i = 1;i <= n;i++)
	{
		int j = 0;
		for (j = 1;j <= i;j++)
		{
			printf("%d*%d=%-3d ", i, j, i * j);

		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	return 0;
}

��Ŀ����дһ������ reverse_string(char* strong)(�ݹ�ʵ��)

ʵ�֣��������ַ����е��ַ���������
Ҫ�󣺲���ʹ��c�������е��ַ�����������

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')

	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char arr[])
{
	
	int left = 0;
	int right =my_strlen(arr)-1;
	
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}

}
int main()
{
	char arr[] = "abcdef";//fedcba
	reverse_string(arr);
	printf("%s\n", arr);

	return 0;
}

�ݹ鷽���� 
����a b c d e f 
1.a��f�Ľ���
2.���� resever_string("b c d e")

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')

	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char* arr)
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if(strlen(arr+1)>=2)
	reverse_string(arr + 1);
	arr[len - 1] = tmp;
}
int main()
{
	char arr[] = "abcdef";//fedcba
	reverse_string(arr);
	printf("%s\n", arr);

	return 0;
}

дһ���ݹ麯��DigitSum(n) ,����һ���Ǹ����������������������֮��
���磺����DigitSum(1729),��Ӧ�÷���1+7+2+9 ,���ĺ���19
����1729  ���19
DigitSum(1729)
DigitSum(172)+1729%10
DigitSum(17)+172%10+1729%10
DigitSum(1)+17%10+...
1+7+2+9
 
 
int DigitSum(unsigned int num)
{
	
	if (num > 9)
	{
		return  DigitSum(num / 10) + num % 10;
	}  
	return num;
}
int main()
{
	unsigned int num = 0;

	scanf("%d", &num);//1729
	int ret = DigitSum(num);
	printf("ret =%d\n", ret);

	return 0;
}


��Ŀ����дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
double Pow(int n, int k)
{
	//n^k=n* n^(k-1)
	if (k < 0)
		return (1.0 / (Pow(n, -k)));
	if (k <= 0)
		return 1;
	else
		return n * Pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("ret=%lf\n", ret);
	return 0;
}