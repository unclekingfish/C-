#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	short s = 0;  //short �������ַ�������2b
	int a = 10; 
	printf("%d\n", sizeof(s = a + 5)); //2
	printf("%d\n", s); //sizeof ����Ľ������洢 ��s=0
	return 0;
}

int main()
{
	int a = 0;
	// ~����2���ƣ�λȡ��
	//00000000000000000000000000000000
	//11111111111111111111111111111111   -����
	//11111111111111111111111111111110   -����
	//10000000000000000000000000000001   -Դ��
	//-1
	printf("%d\n", ~a);
	return 0;
}

int main()
{
	int a = 11;
	a= a | (1 << 2);
	printf("%d\n", a);  //15
	a=a & (~(1 << 2));
	printf("%d\n", a);   //11
	//00000000000000000000000000001011
	//00000000000000000000000000000100
	// 1<<2;
	//00000000000000000000000000000001
	// 
	//00000000000000000000000000001111   
	//11111111111111111111111111111011    //��λ��
	//00000000000000000000000000000100 
	//00000000000000000000000000001011


	return 0;
}

int main()
{
	int a = 10;
	//printf("%d\n", ++a);  //ǰ��++����++����ʹ��
	printf("%d\n", a++); //����++����ʹ�ã���++
	return 0;
}


int main()
{
	int a = (int)3.14;  //int a=int (3.14) //err
	return 0;
}

void test1(int arr[])   //������д��Σ�����������ĸ�ĵ�ַ ��ַ��С��4/8���ֽڴ�С
{
	printf("%d\n", sizeof(arr));

}
void test2(char ch[])  //ͬ��������Ԫ�صĵ�ַ ��ֻҪ�ǵ�ַ�Ǵ�С����4 ��32λ������8��64λ��
{
	printf("%d\n", sizeof(ch));
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));  //int���ʹ�С��4 10��Ԫ�ؾ��� 40���ֽڴ�С
	printf("%d\n", sizeof(ch));// char ���ʹ�С��1  10��Ԫ�ؾ��� 10���ֽڴ�С
	test1(arr);
	test2(ch);
		return 0;
}

int main()
{
	int a = 3;
	int b = 5;
	int c = a && b;   // �߼��룬ֻ������Ϊ�棬��Ϊ��
	printf("%d\n", c);   //1
	c = a || b;
	printf("%d\n", c);
	return 0;
}

int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;  // a++ && ++b   a��ʹ��a=0  ֻҪ�����һ��Ϊ�� 0���ұ߲���ʲô��Ϊ�� ���Ժ��涼���㡣����a�����ˣ���ôa����1
 	//i = a++ || ++b || d++;
	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d); //1 2 3 4
	return 0;
}



int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;  //  a && ++b b=3 1&&3 =1 a++=2 ; 1 && d++  1 && 4 =1 d++=5;
	//i = a++ || ++b || d++;
	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d); //2 3 3 5
	return 0;
}

int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	 
     i = a++ || ++b || d++;  //�߼��� ֻҪǰ��Ϊ��һ��Ϊ�棬��ô����Ķ�������  a=1  Ϊ�棬�����b d������  ����a�����Ҫ++ a=2
	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d); //  2 2 3 4
	return 0;
}

���������� exp1 : exp2:exp3

int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	if (a > b)
		max = a;
	else
		max = b;


	max = (a > b ? a : b);
	/*int a = 0;
	int b = 0;
	if (a > 5)
		b = 3;
	else
		b = -3;

	b = (a > 5 ? 3 : -3;)*/
	return 0;
}