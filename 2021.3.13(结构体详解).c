#define CRT_SECURE_NO_WANRNINGS
#include<stdio.h>
�ṹ��ģʽ��

struct Stu
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1, s2, s3;//s1,s2,s3 ������ȫ�ֵĽṹ�����

//����Ӧ�þ�������ȫ�ֱ������Ƽ�����Ľṹ��ģʽ

typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;//struct Stu ���� ����ֱ����Stu�Ϳ�����
int main()
{

	struct Stu s;//�ֲ�����
	Stu s2; //�ڶ��ֽṹ��ģʽ
	return 0;
}

�ṹ��ĳ�Ա������ ���� ���� ָ�� �����������ṹ�� 
��������ͨ����

typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
int main()
{

	Stu s1 = { "����",20,"123456","��" };//�ֲ�����
	struct Stu s2 = { "����",30,"1864545455","����" }; 
	return 0;
}


struct S
{
	int a;
    char  c;
    char arr[20];
    double d;
};
struct T
{
	char ch[10];
	struct S s;
	char* pc;

};
int main()
{
	char arr[] = "helle world\n";
	struct T t = { "hehe",{100,'w',"hello beauty",3.14},arr };
	printf("%s\n", t. ch);//hehe
	printf("%s\n", t.s.arr);//hello beauty
	printf("%lf\n", t.s.d);//3.14
	printf("%s\n", t.pc);//hello world
	return 0;
}

�ṹ������봫�Σ�

typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
void Print1(Stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}
void Print2(Stu* ps)
{
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);
}
int main()
{
	Stu s = { "����",40,"1558995656","��" };
	//��ӡ�ṹ������
	//Print1��Print2 �Ǹ�����
	//Print1 ʵ�ִ�ӡҪ�࿪����ͬһ�ݵ����ݿռ仹��ʱ�� 
	//Print2 ����ַ��ֻ����Ҫ����һ����ŵ�ַ�Ŀռ�
	//Print2����
	Print1(s);
	Print2(&s);

	return 0;
}

�������ε�ʱ�򣬲�������Ҫѹջ�ġ�
�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½�

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = 0;
	ret = Add(a, b);
	return 0;
}

ջ��    ���ֲ�����
          ��������ʽ����
	      ��������Ҳ���ٿռ�


����    ����̬�ڴ����
          malloc/free
	      realloc
	      calloc


��̬��  ��ȫ�ֱ���
          ��̬����




ջ����   
	           x
	           y        Add�������ٵ�����
	           z         
	        
	           x        a`
	           y        b`
	   
	           ret 
	           b        main  (main��ջ��������3���ռ�)
	           a


���ݽṹ��
--------�������ݽṹ
˳���    123456  ������ʽ�������
����      �����λ�ô��һЩ����  ���ٰ���Щ�����ҵ�  ����1���ҵ�2��2���ҵ�3 ��3���ҵ�4 �������������Ӱ�ÿһ��������������
ջ        ��ջ������ݣ���Ԫ�ؽ�ȥ��ѹջ����ջ�ص㣺���Ͻ����ϳ�
����

--------�������ݽṹ
������

--------ͼ


����һ��Ԫ�أ�ѹջ
ɾ��һ��Ԫ�أ���ջ
ջ���Ƚ���� ��������ȳ�
 

����baiduһ��:����ջ֡�Ĵ���������