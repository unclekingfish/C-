#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

���ű��ʽ�������ö��Ÿ����Ķ�����ʽ�����ű��ʽ��������������ִ�С��������ʽ
�Ľ�������һ�����ʽ�Ľ����

int main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1); // a=2+10=12  ; b=12+1=13  c= 13
	return 0;
}

if (a=b+1, c=a/2 ,d>0)   //���d>0 ,����ʽΪ��


a = get_val();
count_val(a);
while (a > 0)
{
	//ҵ����
	a = get_val();
	count_val(a);
}

����ö��ű��ʽ����д��
while (a = get_val(), count_val(a), a > 0)
{
	//ҵ����
}


�±����ò��������������ò������ͽṹ��Ա������

1�±����ò�����[]
��������һ�������� + һ������ֵ


int main()
{
	int arr[10] = { 0 };
	arr[9] = 10;
	//[]��������������arr��9
	return 0;
}


�������ò�����

int get_max(int x, int y)  //�������()�Ƕ��庯����ʱ���õģ����Ǻ������ò�����
{
	return x > y ? x : y;
}
int main()
{
	int a = 10;
	int b = 20;
	//����get_max()���ú�����ʱ���()���Ǻ������õĲ�����
	int max = get_max(a, b); //3��������get_max ,a ,b   ���Ժ������ò�����������1��������
	printf("max=%d\n",max)
	return 0;
}

�ṹ��Ա������

//ѧ��
//����һ���ṹ������ -struct Stu
struct Stu
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	int a = 10;
	//ʹ��struct Stu ������ʹ�����һ��ѧ������s1,����ʼ��
	struct Stu s1 = { "����",20,"201910305" };
       struct Stu* ps = &s1;
	   printf("%s\n", ps->name);
	   printf("%d\n", ps->age);
	   //�ṹ��ָ�� ->��Ա��

	   printf("%s\n", (*ps).name);
	   printf("%d\n", (*ps).age);


	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	//�ṹ�����.��Ա��

	return 0;
}

��������
int main()
{

	char a = 3;
	//00000000000000000000000000011   -int a 4b  
	//00000011 -a   char a 1b
	char b = 127;
	//00000000000000000000001111111   -int b
	//01111111 -b
	 
	//a��b������
	//00000000000000000000000000011
	//00000000000000000000001111111
	//00000000000000000000010000010
	//
	char c = a + b;
	//100000010  -c
	//11111111111111111111110000010 - ����
	//11111111111111111111110000001 -����
	//10000000000000000000001111110 -ԭ��
	//-126
	printf("%d\n", c); 
	return 0;
}

ʵ��1��
int main()
{
	char a = 0xb6;  //1011 0110(2���ƣ�   char a ���int a 11111111111111111111111110110110
	short b = 0xb600;//1011 0110 0000 0000     short b ���int b 1111 1111 1111 1111 1011 0110 0000 0000
	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000)
		printf("c");
	return 0;     //c
}

int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));  //%u -�޷��ŵ�ʮ��������  1
	printf("%u\n", sizeof(+c));//4  cֻҪ������ʽ���㣬�ͻᷢ���������������ʽ+c ��������������sizeof��+c)��4���ֽ�
	printf("%u\n", sizeof(!c));//1
	return 0;
}


����ת��


������룺
int fun()
{
	static int count = 1;  
	return ++count;
}
int main()
{
	int answer;
	answer = fun() - fun() * fun();
	printf("%d\n", answer);//�������
	return 0;
}

������
����һ�ν��뺯��ʱ�����2 ���ڶ��ν��� ����Ϊstatic �Ĵ��� int count =1 �����ֵ���㡣count ��ֵ�̳���һ��count��ֵ2 ��������Ϊ3
ͬ������ν���ʱ�����Ϊ4��
�����ǽ���answer����ʱ �������2-3*4  ���п����� 4-2*3 ����������塣


int main()
{
	int i = 1;
	int a = (++i) + (++i) + (++i);
	printf("a=%d\n", a);
	return 0;//��������ͬ�������ͬ
}