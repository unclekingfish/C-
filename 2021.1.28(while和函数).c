#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{   
//	int a = 0;
//	printf("�������\n");
//	
//	while (a<=100)
//	{
//		printf("�ô��� %d\n",a);
//		a++;
//	}
//	if (a > 100)
//	{
//		printf("���������۷�\n");
//	}
//	return 0;
//}




//int main()
//{
//	int A = 0;
//	printf("��ãʲô����֪��\n");
//	while (A <= 10000)
//	{
//		printf("ѧϰ������������� %d\n",A);
//		A++; 
//	}
//	if (A> 10000)
//	printf("���ϴ�ѧ�ҷ�Ǯ��Ĺ���\n");
//	return 0;
//}
//
//


//int main()
//{
//	int a = 0;
//	printf("��Ҫ��ô��?\n");
//	while (a <= 10000);     //ɵ�Ƶ����˺þã�������Ӹ�;!!
//	{
//		printf("ѧϰ %d\n",a);
//		a++;
//	}
//	if (a>10000)
//		printf("�ɹ�\n");
//    return 0;
//}




//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("����������:>");
//	scanf("%d%d", & a, &b);
//        c= Add(a, b);
//
//	printf("sum = %d\n", c);
//	return 0;
//}
//


//���������֣��⺯�����Զ��庯��


//int add(int x,int y)
//{
//	
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 23;
//	int b = 45;
//	
//	int c=add(a, b);
//	printf("%d\n", c);
//	return 0;
//}  



//���飺

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	printf("%d%d%d%d", a, b, c, d);
//	return 0;
//}

//����Ĵ���Ƚ��鷳

//int main()
//{
//	int num[5] = { 1,2,3,4 };//����һ��5���������ֵ����飬����������1��2��3��4
//
//	printf("%d",num[2]);//�±�ķ�ʽ���������λ�� num[�±�]
//	return 0;
//}


//��while����ʽ��ʾ

//int main()
//{
//	int num[10] = { 1,2,3,4,5,6 };
//	int i = 0;
//
//	while (i <10)
//	{
//		printf("%d\n", num[i]);
//		i++;
//	}
//	if (i =10)
//		printf("over");
//	return 0;
//}


//   ������

//int main()
//{
//	int a = 5/2; //����������ǳ� ���ó��Ľ������Ҳ����2������������û����ʾ 
//	printf("%d", a);
//	return 0;
//}


//int main()
//{
//	int a = 5 % 2; //�����������%��ȡģ�������������ó����������̵�����Ҳ����1
//	printf("%d", a);
//	return 0;
//}


//�ƣ������ƣ�λ������
// <<����
// >>����
  

int main()
{
	int a = 1;
	//int ����ռ4���ֽ�-32bitλ
	//00000000000000000000000000000001
	int b = a << 1;
	// ��λ����00000000000000000000000000000010 ת��Ϊ��������2
	printf("%d\n", b);
	printf("%d\n", a); //�ƶ���ֻ��b
	return 0;
}

//�������ƣ�λ����
// & ��λ��
// | ��λ��
// ^ ��λ���
�����ƣ�



