#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

ǰ���ù�����������
Add(int x, int y)
{
	int z = 0;
	z = x + y;
		return z;
}
int main()
{
	int a = 100;
	int b = 20;
	int z = Add(a, b);
	printf("%d\n", z);
	return 0;
}


��ѯ�⺯�����÷� ����վ��www.cplusplus.com 

������strcpy-string copy :   char * strcpy ( char * destination, const char * source ); <string.h>

int main()
{
	char a[] = "�Ұ���";
	char b[20]="�Ұ��㣬���㣬����"; 
	strcpy(b, a);
	printf("%s", b); //Ϊʲô���桰�ģ����㣬���㡱û�д�ӡ   ��Ϊa ��"�Ұ���" ��ʵ��"�Ұ���\0",�����и������ַ�����ӡʱ��һ����"\0"��û��ӡ��ȥ�ˡ�
	return 0;
}

����2��momset - momery set; void* memset(void* ptr, int value, size_t num);<striing.h>

int main()
{
	char a[20] = "hello world!";
	memset(a, '_', 2);
	printf("%s", a);
	return 0;

}

�⺯�����Ե���վ��www.cplusplus.com ��ѯ

�Զ��庯����
��ɣ�
ret_type fun_name(para1, *)
{
	statement;//�����
}
ret_type  ��������
fun_name ������
paral  ��������

�����ӣ�
дһ�����������ҳ����������е����ֵ��

int Max(int x, int y)
{
	
	if (x > y)
	
		return x;
	
	else  
	
		return y;
	
}
int main()
{
	int a = 12;
	int b = 23;
	int c=Max(a, b);
	printf("%d\n", c);
	int d = Max(12, 45);
	printf("%d\n", d);
	return 0;
}

//дһ���������Խ����������α��������ݣ�
void swap(int x, int y)  //x,y���÷���ֵ���� void
{
	int temp = 0;
	 temp=x;
	 x = y;
	 y = temp;

}
int main()
{
	int a= 2;
	int b =4;
	swap(a, b);
	printf("a=%d\nb=%d", a, b);
	
	return 0;
} //err  ,���뺯��ʱ��a��ֵ����x�Ĵ���ռ䣬b��ֵ����y�Ĵ���ռ䡣
 //���ǵ�ֵ�����ɹ�������ֻ�Ǹ�ֵ����x��y�Ĵ���ռ䣬�ȳ��˺�����a,b��ֵ��Ȼ���䡣
