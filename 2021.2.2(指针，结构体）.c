#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


ָ�룺

�ڴ��������ر���Ҫ���Ǵ洢������������еĳ������ж������ڴ��н��еġ�
Ϊ����Ч�����ڴ棬���ڴ滮��Ϊһ��һ��С���ڴ浥Ԫ��ÿ���ڴ浥Ԫ�Ĵ�С��1���ֽڣ�byte)
Ϊ����Ч�ķ��ʵ��ڴ��ÿ����Ԫ���͸��ڴ浥Ԫ�����˱�ţ���Щ��žͱ���Ϊ��ַ��

����
���ǵ��Զ���32λ��64λ֮�ƣ������32λ����˵��32�����£�ÿһ���������������ſ��أ������൱��1���ؾ��൱��0��
��32����2��32�η��ֵ�ַ�����������С�洢��λ��bit�����أ����Ǿ����洢2��32�η�+1�����أ�bit)��
�õ��Եļ�����-�߼�-����Ա���� BIN(������)100000000000000000000000000000000 ת����10���ƾ��� 4294967296 bit 
����8 ����536870912 byte���ֽڣ�������1024 ����524288 kb(ǧ�ֽ�) ������1024����512 mb�����ֽڣ�������1024����0.5GB��ǧ���ֽڣ�
0.5 GB ��С�ĵ�ַ�����������4G�����4G����8GB��С���ڴ�ʵ����̫С�ˡ�������ǰ���С��λ�ӱ��ظ�Ϊ�ֽڣ�0.5*8=4GB �������˵�ͺ���ܶ��ˡ�
���԰��ڴ滮��Ϊһ��һ��С���ڴ浥Ԫ��ÿ���ڴ浥Ԫ�Ĵ�С��1���ֽڣ�byte)��

int main()
{
	int a = 13;
	int* c = &a; //& - ȡ��ַ��; ȡ��a�ĵ�ַ
	printf("%p\n", &a);  //%p - �Ե�ַ����ʽ��ӡ    p(paddress)
	printf("%p\n", c);
	//printf("%p\n", int*); err
	return 0;
}



��ַ��δ洢,��Ҫ����ָ�����

int main()
{
	int a = 12;//���ڴ�����4���ֽڵĿռ�
	int e = 11;
	int *c = &a; //c��Ϊһ������ָ�����
	int* b = &e;//b��һ������- ָ�����  ��������int*
	printf("%p\n", e);
	printf("%p\n", b);//b�Ǹ�ָ����������Ǵ洢e�ĵ�ַ������bҲ���Լ��Ŀռ��ַ������������ַ��ͬ
	*c = 20;//��*c�洢�ռ��е�a�ĵ�ַ������ַ�һ�a��λ�ã��ҵ�a���ٸ�ֵ20��a�ı�a��ֵ��
	*b = 21;//*-�����ò�����/��ӷ��ʲ�����
	printf("%d\n", a);
	printf("%d\n", e);
	return 0;
}

ע��  int* p = &a; 
         int* ��һ�����壬����intһ���������������ͣ�����������*���ж�һ�����
         �ͱ�ʾp��һ��ָ���������ʾpָ��Ķ���a������int

      *c ���*�������*��һ���������*�����Ǿ��Ǹ��﷨��ʽ��ûʲôʵ�ʼ�ֵ
         ����*c��*�Ǹ�������������������

int main()
{
			 double a = 3.14;
			 double* b = &a;
			 *b = 5.34;
			 printf("%lf\n", a);
			 printf("%lf\n", *b);
			 printf("%lf\n", b);
			 printf("%d\n", sizeof(b));//32λ��4 ��64λ��8

			 return 0;
}


int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(float*));
	return 0;
}



struct �ṹ��
һЩ���Ӷ�����Ҫ����ʱ
���磺�� ������ߣ����أ����䣬����....�ȵȵ�һЩ�������������
      һ���� �����������۸񣬳����磬�����.....�ȵȵ�һЩ����������

	���Ӷ���-�ṹ��-���Ǵ��������һ������


	struct Book
{
	char name[20];//���ݽṹ
	int price;//44
};  //;�ֺŲ���ȱ�٣���=
int main()
{
	//���ýṹ������-����һ�����͵Ľṹ�����
	struct Book	b1 = { "���ݽṹ",44 };
	printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	b1.price = 34;
	printf("���¼۸�%dԪ\n", b1.price);
	return 0;
}



struct Book
{
	char name[20];
	int price;
};
int main()
{
	struct Book b2 = { "C���Գ���",55 };
	struct Book* pd = &b2;
	//����pd��ӡ�����ͼ۸�
	printf("%s\n", (*pd).name);
	printf("%d\n", (*pd).price);
	// . Ϊ�ṹ��Ա���ʲ�����
	// . ������Ӧ�õ��ṹ����� .�����ҵ���Ա
	//�򻯣�
	printf("%s\n", pd->name);
	printf("%d\n",pd->price);
	//->  �õ����ǽṹ��ָ�� ->���ϳ�Ա
	return 0;
}

��ô�޸Ľṹ���������

struct Book
{
	char name[20];
	int price;
};
int main()
{
	struct Book b3 = { "���������",66 };
	 //b3.name = "c++";//err �ַ�������
	 //b3.price = 52;//ok  ���ֿ���
	strcpy(b3.name, "C����");// strcpy -string copy -�ַ�������
	//strcpy ��һ���⺯�� Ҫʹ�ñ������� #include<string.h>
	printf("%s\n", b3.name);
	return 0;
}


test��

struct man
{
	double weight;
	double height;
	char name[5];
	char sex[5];

};
int main()
{

	struct man m1 = { 65.2 ,179,"����","m" };
	printf("%lf\n", m1.weight);
	strcpy (m1.name, "����");
	printf("%s\n", m1.name);
	return 0;
}


//test2:
struct man
{
	double weight;
	double height;
	char name[5];
	char sex[5];

};
int main()
{

	struct man m1 = { 65.2 ,179,"����","m" };
	struct man* mp = &m1; //�ҵ�һ��mp�Ŀռ���m1�ĵ�ַ�����ͻ��ǽṹ�����
	//printf("%s\n", (&m1).name);  err
	printf("%s\n", mp->name);
	printf("%lf\n",(*mp).weight);
	return 0;
}