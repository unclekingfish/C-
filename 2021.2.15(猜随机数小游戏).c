#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��������Ϸ
//1.���Ի�����һ�������
//2.������
//
//ʱ�������ǰ�������ʱ�� - ���������ʼʱ�䣨1970.1.1.0:0 : 0) = (xxxx)��
//
//void menu()
//{
//	printf("##############################\n");
//	printf("####   1.play    0.exit   ####\n");
//	printf("##############################\n");
//}
//void game()
//{
//	//1.����һ������� 
//	int ret = 0;
//	int guess = 0;
//	//��ʱ����������������������ʼ��
//	//time_t time(time_t *time) ;������long ����-������
//	//time_t
//	//srand((unsigned int)time(NULL)); //NULL ->��ָ�� �����ú�������ʵ��Ч��
//	   //����������Ŵ�λ�á�
//	//��time���� ��Ҫ����<time.h>
//	//����һ���������㣻ʹ��Ҫ����ʹ��<stdlib.h> 
//
//	ret = rand() % 100 + 1; //����1-100֮�������     // ����һ�������  ʹ����Ҫ����ʹ��<stdlib.h> 
//   //���������0 - RAND_MAX(0f7fff) ;0f--ʮ�����ƣ�7fffת��Ϊʮ��������32767
//  //	printf("%d\n", ret);
//	//2.������
//
//	while (1)
//	{
//		printf("����������>:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("��������ִ���\n");
//
//		}
//		else if (guess < ret)
//		{
//			printf("���������С��\n");
//
//		}
//		else
//		{
//			printf("��ϲ��¶���\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL)); //���žͺã�ֻҪ����һ�ξͺã�����ÿ������Ϸ�����ɡ�
//	do
//	{
//
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);//input ����Ϊ0 Ϊ�����˳�ѭ��������Ϊ��0 Ϊ�������ѭ����
//	return 0;
//}


//��һ�ԣ�

//void menu()
//{
//	printf("**************************************\n");
//	printf("*******   1.start    0.exit   ********\n");
//	printf("**************************************\n");
//
//}
//
//void game()
//{
//	int guess = 0;
//	int ret = 0;
//	ret = rand() % 100 + 1;
//	
//	while (1)
//	{
//		printf("����������\n");
//		scanf("%d", &guess);
//		if (ret < guess)
//		{
//			printf("�����������\n");
//			
//		}
//		else if (ret > guess)
//		{
//			printf("�������С��\n");
//			
//		}
//		else
//		{
//			printf("��ϲ�㣡��¶���\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	menu();
//	srand((unsigned int)time(NULL));
//	
//	do
//	{
//		printf("��ѡ��>:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//
//void meun()
//{
//	printf("*****************************************\n");
//	printf("*********   1.start   0.exit   **********\n");
//	printf("*****************************************\n");
//
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	while (1)
//	{
//		printf("����������\n");
//		scanf("%d", &guess);
//		if (ret > guess)
//		{
//			printf("��������С��\n");
//
//		}
//		else if (guess > ret)
//		{
//			printf("�������ִ���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣡�������\n");
//			break;
//		}
//
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	meun();
//	srand((unsigned int)time(NULL));
//	do
//	{
//	
//		printf("��ѡ��>: ");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("���������������\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}