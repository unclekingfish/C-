#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


int main()
{
	int len = 0;
	len = strlen("abc");
	printf("%d\n", len);
	printf("%d\n",strlen("abc"));
	return 0;
}

int main()
{
	printf("%d", printf("%d",printf("%d",43))); //4321
	//printf�����ķ���ֵ�Ǵ�ӡ�ַ��ĸ���
	//printf("%d",43)--43��printf("%d", 2)--2 ��printf("%d", 1��--1��
	return 0;
}



 ���溯������֣���warning C4013: ��Add��δ���壻�����ⲿ���� int��
���Ǽ��룺����ĵ�һ�д���
int Add (int ,int );  //��������  ������x,y����ʡ�ԣ�int x��int y��
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b); //��������
	printf("%d", sum);
	return 0;

}
int Add(int x, int y) //��������
{
	int z = x + y;
	return z;
}  


 �����ļ�ֵ��
	 ��Դ�ļ���������һ��add.c�ļ�������ͷ�ļ��ﴴ��һ��add.h�ļ���

	 �Ѻ��������ŵ�ͷ�ļ���add.c 
     #ifndef __ADD_H__
     #define __ADD_H__

	 int Add(int x, int y);//��������

     #endif 
  
     �Ѻ�������ŵ� add.c �ļ���
      #include  "add.h"
	 int Add(int x, int y) //��������
	 {
		 
		 return x + y;
	 }

	 ������Դ�ļ�.c����ʹ���������ʱ�����������
      #include "add.h"     ������ʹ��ʱֱ��˫���żӺ���ʽ�����ĵ�ͷ�ļ�
		 int main()
	 {
		 int a = 10;
		 int b = 20;
		 int sum = Add(a, b); //��������
		 printf("%d", sum);
		 return 0;

	 }
    �����Ͳ���Ҫ��������������塣��������ࡣ

		����������
		1.���߱�������һ��������ʲô��������ʲô����������ʲô��
		���Ǿ����ǲ��Ǵ��ڲ���Ҫ��
		2.����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ�á�
		3.����������һ��Ҫ����ͷ�ļ��еġ�




�����ݹ飺

int main()
{
    printf("hehe\n");
    main();
    return 0;
}//��ѭ����ӡhehe ��Ȼ�������ˡ�  ͣ�����ش�ӡ��stack overflow ջ���
 //�ݹ鳤���ֵĴ���ջ���
�ڴ��Ϊ��

ջ�� ���ֲ�����
�����β�


��������̬���ٵ��ڴ�
malloc calloc �Ⱥ���


��̬����ȫ�ֱ���
static���εı���



��ϰ1������һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺����1234 �����1 2 3 4

void print(int n)
{
    if (n > 9)
    {
        
        print(n/10);
    }
    printf("%d ", n %10);
}
int main()
{
     unsigned int  num = 0;
    scanf("%d", &num);
    print( num);
    return 0;
}


������

�������������123
n = 123; 123>9   ����if  ��if��������һ��print��������һ��print����) ������ڶ��ε�print����ѭ�� n=123/10=12  

12>9 ����ڶ���print������if  if�������и�print����n=12/10=1  ,���������print���� ��1<9 ,if��������������pintf("%d",1%10)  ���1 ��

������print���������������1���صڶ���pinrt�����е�print(n/10)��Ȼ�����ִ������Ĵ��� ��ӡ 12%10=2

�ڶ���print�������������2���ص�һ��prinf������print(n/10)��Ȼ�����ִ������Ĵ��� ��ӡ 123%10 =3  ������������� ��� 1 2 3 


  ��ϰ2��
    ��д��������������ʱ���������ַ����ĳ��ȡ�

    ��ֱ�����ַ����ĳ��ȣ�
    int main()
{
    char arr[] = "1234";
    int charr = strlen(arr);
    printf("%d", charr);
}

    int my_strlen(char* arr1) 
    {
        int count = 0;  
        while (*arr1 != '\0') //�жϴ��������ַ��ǲ���'\0'
        {
            count++;
            arr1++;  //��һ���ַ�
        }
        return count;
    }

    int main()
    {
        char arr[] = "welcome";
        int charr = my_strlen(arr);//arr �����飬���鴫�Σ�����ȥ�Ĳ����������飬����������׸�Ԫ�صĵ�ַ
        printf("%d", charr);
        return 0;
}

    �𰸣����ܴ�����ʱ����

  int my_strlen(char* arr1)
    {
        if (*arr1 != '\0')
            return  1 + my_strlen(arr1 + 1);
        else
            return 0;
    }

    //�Ѵ��»�С
    //my_strlen("bit");
    //1+my_strlen("it");
    //1+1+my_strlen("t")'
    //1+1+1+my_strlen("\0")
    //1+1+1+0
    //3

    int main()
    {
        char arr[] = "welcome";
        int charr = my_strlen(arr);
        printf("%d", charr);
        return 0;
    }