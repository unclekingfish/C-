#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

��Ŀ����д������һ��1��100�����������г��ֶ��ٸ�����9

int main()
{
	int num = 0;
	int count = 0;
	for (num = 1;num <= 100;num++)
	{
		if (num % 10 == 9)
		{
			printf(" %d", num);
			count++;
		}
		 if (num / 10 == 9) //����90-99�������Ҳ�Ǻ�������9��
		{
			printf( " %d", num);
			count++;
		}
	}
	printf("\count=%d", count); //20 ��,��һ��if�����99���ڶ���if��Ҳ����99��
	return 0;
}


��Ŀ������1/1-1/2+1/3-1/4+1/5....+1/99-1/100 ��ֵ����ӡ�����

int main()
{
	int i;
	double sum1 = 0.0;
	double sum2 = 0.0;
	double sum = 0.0;
	double b= 0.0;
	double c= 0.0;
		for (i = 1;i <= 100;i+=2)
		{
			//b = 1 / i; ����д���У���Ϊ1/2������1����������������ȷӦ������1.0/2=0.5
			b = 1.0 / i;
			sum1= sum1+ b;
	     }
		
		for (i = 2;i <= 100;i+=2)
		{
			
			c = 1.0/i;
			sum2 = sum2+ c;

		}
		sum = sum1 - sum2;
		printf("%lf", sum);
	return 0;
}

�𰸣�
int main()
{
	int i = 0;
	double sum= 0.0;
	int flag = 1;
		for (i = 1;i <= 100;i++)
		{
			sum += flag*1.0 / i;   //��flag=1ʱ��1/1, 1/3Ϊ������flag=-1ʱ��1/2 ,1/4Ϊ��
			                       //sum=1/1-1/2+1/3-1/4....+1/100
			flag = -flag;

		}
		printf("%lf", sum);
	return 0;
}


��Ŀ����ʮ�����������ֵ

�𰸣�
int main()
{
	int num[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-11 };
	int i = 0;
	int sz = sizeof (num) / sizeof (num[0]);
	int max = num[0]; //���ֵ
	for (i = 1;i <sz;i++)
	{
		if (num[i]> max) //����ڶ���������num[0]��һ����������max�滻�ɵڶ��������ֻ���ȥ��
		{
			max = num[i];
		}
	}
	printf("%d", max);
	return 0;
}

��Ŀ��
����Ļ�����9*9�˷��ھ�

int main()
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = 1;i < 10;i++)
	{
		for (j = 1;j < 10;j++)
		{
			sum = i * j;
			printf(" %d*%d=%d ", i, j,sum);
		}
	}
	return 0;
}

�𰸣�
int main()
{
	int i = 0;
	
	int sum = 0;
	for (i = 1;i <= 9;i++)
	{
		//��ӡһ��
		int j = 1;
		for (j = 1;j<=i;j++)
		{
			
			printf("%d*%d=%-2d ", i, j, i*j);
		     //%-2d ->��λ�����
			//%2d�ǽ����ְ����Ϊ2�������Ҷ��뷽ʽ�����������λ������2λ������߲��ո�
		}
		printf("\n");
		}
		

	return 0;
}

������
1 * 1 = 1
2 * 1 = 2  2 * 2 = 4
3 * 1 = 3  3 * 2 = 6  3 * 3 = 9
4 * 1 = 4  4 * 2 = 8  4 * 3 = 12 4 * 4 = 16
5 * 1 = 5  5 * 2 = 10 5 * 3 = 15 5 * 4 = 20 5 * 5 = 25
6 * 1 = 6  6 * 2 = 12 6 * 3 = 18 6 * 4 = 24 6 * 5 = 30 6 * 6 = 36
7 * 1 = 7  7 * 2 = 14 7 * 3 = 21 7 * 4 = 28 7 * 5 = 35 7 * 6 = 42 7 * 7 = 49
8 * 1 = 8  8 * 2 = 16 8 * 3 = 24 8 * 4 = 32 8 * 5 = 40 8 * 6 = 48 8 * 7 = 56 8 * 8 = 64
9 * 1 = 9  9 * 2 = 18 9 * 3 = 27 9 * 4 = 36 9 * 5 = 45 9 * 6 = 54 9 * 7 = 63 9 * 8 = 72 9 * 9 = 81


��������Ϸ
1.���Ի�����һ�������
2.������

ʱ�������ǰ�������ʱ��-���������ʼʱ�䣨1970.1.1.0:0:0) =(xxxx)��

void menu()
{
	printf("##############################\n");
	printf("####   1.play    0.exit   ####\n");
	printf("##############################\n");
}
void game()
{
	//1.����һ������� 
	int ret = 0;
	int guess = 0;
	//��ʱ����������������������ʼ��
	//time_t time(time_t *time) ;������long ����-������
	//time_t
	//srand((unsigned int)time(NULL)); //NULL ->��ָ�� �����ú�������ʵ��Ч��
	   //����������Ŵ�λ�á�
	//��time���� ��Ҫ����<time.h>
	//����һ���������㣻ʹ��Ҫ����ʹ��<stdlib.h> 

	ret = rand() % 100 + 1; //����1-100֮�������     // ����һ�������  ʹ����Ҫ����ʹ��<stdlib.h> 
   //���������0 - RAND_MAX(0f7fff) ;0f--ʮ�����ƣ�7fffת��Ϊʮ��������32767
  //	printf("%d\n", ret);
	//2.������

	while (1)
	{
		printf("����������>:");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("��������ִ���\n");

		}
		else if (guess < ret)
		{
			printf("���������С��\n");

		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //���žͺã�ֻҪ����һ�ξͺã�����ÿ������Ϸ�����ɡ�
	do
	{

		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);//input ����Ϊ0 Ϊ�����˳�ѭ��������Ϊ��0 Ϊ�������ѭ����
	return 0;
}


try myself

void menu()
{
	printf("**************************************\n");
	printf("*****  1.��ʼ��Ϸ   0.�˳���Ϸ   *****\n");
	printf("**************************************\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1; //<string.h>   rand()%100 -����32767 % 100=1-99֮������� 

	while (1)
	{
		printf("����������\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�����������\n");
		}
		else if (guess < ret)
		{
			printf("�������С��\n");
		}
		else 
		{
		printf("��¶���\n");
		break;
        }

	}


}
int  main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
   
	
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:

			game();
			break;

		case 0:

			printf("�˳���Ϸ\n");
			break;

		default:

			printf("ѡ����󣬴��¿�ʼ\n");
			break;
		}
	} while (input);
	return 0;
}



goto ����ʹ�ã�������÷�����ֹ����ĳЩ���Ƕ�׵Ľṹ�Ĵ�����̣�����һ�������������ѭ��

һ���ػ�����

int main()
{
	int input[20] = { 0 };
	system("shutdown -s -t 120"); //����system���� ��Ҫ��������<stdlib.h>
	again:
	printf("���롰��á�������Խ���2�����ڹػ���");
	scanf("%s", input);
	if (strcmp(input, "���")==0) //�Ƚ������ַ��� -strcmp  ʹ��ʱҪ����<string.h>
	{
		system("shutdown -a");
	}
	else
	{
		
		goto again;
	}

	return 0;
}

for����
int main()
{
	int input[20] = { 0 };
	int i = 0;
	system("shutdown -s -t 120");
	printf("����3�λ������롰��á�����Ȼ���Խ����������ڹػ�\n");
	
	for (i = 0;i < 3;i++)
	{
		scanf("%s", input);
		if(strcmp(input, "���")==0)
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	return 0;
}
//
while ����

int main()
{
	int input[] = { 0 };
	system("shutdown -s -t 120");
	
	
	while (1)
	{
		printf("������ںš�����������Ȼ���Խ���2�������Զ��ػ�\n");
		scanf("%s",&input);
		if(strcmp(input,"����")==0)
			{
				system("shutdown -a");
				break;
			}
		
	}
	return 0;
}