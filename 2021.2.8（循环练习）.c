#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

for ѭ���ı���2��

int main()
{
	int x, y;
	for (x = 0, y = 0;x < 2 && y < 5;++x, y++)
		//x ,yΪ0��������x<2 && y<5,��ӡ��һhehe;��ӡ��������ǰ��++�����Ǻ���++��x,y��Ϊ1
		//1�����ж�������Ϊ�档��ӡ�ڶ���hehe����ӡ�꣬x=2,y=2,������x<2 && y<5 Ϊ�٣�����ѭ����
	{
		printf("hehe\n");
	}
	return 0;
}

��ϰ��
����ѭ��Ҫѭ�����ٴΣ�
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0;k = 0;i++, k++)  //�жϲ���k=0 =��ֵ ==���ж� ��0Ϊ�٣�ѭ�������Ͳ���ȥ
		k++;
	return 0;
}//��Ϊ0�� ������k=��0,��Ϊ��ѭ��


do... while(); ѭ��   �ص㣺ѭ������ִ��һ�Σ�ʹ�ó������ޣ����Բ��Ǿ���ʹ�á�
do�����﷨��

do
   ѭ����䣻
while(���ʽ)
����
int main()
{
	int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	} while (i <= 10); //1~10ѭ��
		return 0;
}

int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			break;
		printf("%d ", i); //ǰ��1 2 3 4 û���⡣����ӡ��4��i++ ,i=4+1=5  ����ifѭ�� i== 5 ����������
		                  //break ����do whileѭ����ֱ�ӽ�������
		i++;
	}
	while (i <= 10);
	return 0;
}


int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf("%d ", i); //ǰ���1 2 3 4 û���⡣��i++��i=4+1=5 ������if(i==5)ѭ��
		                  //��continue ��������ѭ����ֱ�ӻص�do��ͷ���ֽ���if�жϣ�i==5�������Ϊ�棬��continue,������do��ͷ����ѭ����
		i++;
	} while (i <= 10);
	return 0;
}

��ϰ��
1.����n�Ľ׳ˡ�  1x2x3x4x5x...n

try:
	int main()
{ 
	int n =0;
	int m = 1;
		for (n=0;n<m;n++)
	{
			for(m=1;)
		printf("%d*%d", &n,&m);
		m++;
	}
	return 0;
}

anser��
int main()
{
	int n = 0;
	int m = 0;
	int ret = 1;
	scanf("%d", &n);
	for (m = 1;m <= n ; m++)
		
			ret = ret* m;
	printf("ret= %d\n", ret);

	return 0;
}