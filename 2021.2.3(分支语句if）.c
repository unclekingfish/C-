#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

��֧��� (ѡ��ṹ��if��switch

ʲô����䣿
c��������һ���ֺ�;�����ľ���һ����䡣���磺
printf("haha");
1 + 2;
 ; //�����-�����


int main()
{
	int man = 10;
	if (man < 18)
	    printf("δ����\n");
  //else if (18<=man<60)  //���У�����Ȼ��ӡδ���ꡣ
   ����ִ��˳����18<=man �Ƕ������������Ϊ�٣�Ϊ0 ,0<60,���Դ�ӡδ����
	else if (man >= 18 && man < 60)  //&& �߼��������
		printf("׳��\n");
	else if (man >= 60 && man < 120)
	    printf("������\n");
	else if(man>=120)
		printf("����Ϊ��\n");
	return 0;
}

int main()
{
	int a = 2;
	if(a < 18)
	printf("δ����\n");
	else
	{
	if (a >= 18 && a < 70)
		printf("׳��\n");
	else if (a >= 70 && a < 120)
		printf("����\n");
	else
		printf("����\n");
 }
	return 0;
}

ע�������������������һ����˼��


int main()
{
	int a = 2;
	if (a < 18)
	//{
		printf("δ����\n");
		printf("����������\n"); //��Ҫ�Ӵ�����{}�������ܱ��롣
		//if ������else������Ҫ���ƶ��������ô�����{}������
	//}
	else
	{
	if (a >= 18 && a < 70)
		printf("׳��\n");
	else if (a >= 70 && a < 120)
		printf("����\n");
	else
		printf("����\n");
 }
	return 0;
}


int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	//{
		if (b == 2)
			printf("hehe\n");
	//}
	    else
			printf("haha\n");
	return 0;
}
else ��ѡ�������ifƥ�䣬���ۿ������͵�һ�����λ
������� ����if(a==1)�����жϣ�ӦΪa=0,����if�жϲ��������������������
else ��ʵ�Ǻ�if(b==2)��ƥ�䡣


int main()
{
	int a = 3;
	if (a = 5) //= �Ǹ�ֵ ==�Ǹ�ֵ
    //������if (5 ==a) ������ʹ����һ��=������Ҳ����ɹ����С�����Ч�ҳ�����
	{
		printf("hehe");
	}
	return 0;
}//����漰һ������(2)��һ��������num)�ıȽ�����ǰѳ�����2����ǰ����������һ���õ�д������


��ϰ��
1.�ж�һ�����Ƿ�Ϊ����
2.���1 - 100֮�������

˼·��
��int a = 0; int b = a&2 �� &-������������ġ��������� ���b>1��һ����������


int main()
{
	int a = 1;
	while (a <=100)
	{
		
		if (a & 2 ==1) //  (a & 2 !=0)Ҳ��
		printf("%d ", a );
		a++;
	}

	return 0;
}

����2:
int main()
{
	int a = 1;
	while (a < 100)
	{
		
		printf("%d\n", a);
		a+= 2;
	}
	return 0;
}