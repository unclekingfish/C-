#define _CRT_SECURE_NO_WARNINGS //һ������Դ�ļ��ĵ�һ��

#include <stdio.h>

int main()
{
    float  weight0=0;
	float  weight1 = 0;
	float sum = 0;
		 scanf("%f%f", &weight0, &weight1);
	 sum = weight0 + weight1;

	 printf("%f\n", sum);
	
	
	return 0;
}//scanf���������C�����ṩ�ģ���scanf_s���������VS�༭���ṩ�ģ����ʹ��scanf_s�����������������������������ʱ�Ͳ��ܳɹ�������



int main()
{

	float num = 0;
	scanf("%f", &num);
	printf("%f\n", num);
	return 0;
}


int main()
{
	//const - ������
	const int num = 6;  //��ʱ��num��const�����εĳ�������num�ǳ�����num�����Ǳ���
	//int num = 6   num�Ǳ���
	printf("%d\n", num);
	num = 2;
	printf("%d\n", num);

	//���泣����������ֱ��д��������ֵ���� 2�� 3.34 ��100
	return 0;
}




int main()
{
	const int n = 10;
	int arr[n] = { 0 };//n�Ǳ������������г����ԣ�����˵n�ǳ�����
	//���ڸ�������int arr[4]={0}��������˼�� ����һ���������飬����Ϊ4��ȫ����ʼ��Ϊ0 ��int arr[4]={0��0��0��0}
    //��ô˵[]��Ӧ������һ������
	return 0;

}



��������
int main()
{
	int num[] = {0};
	printf("%d\n", num);
	return 0;
}//�����벻ͨ




//��3�� #define ����ı�ʶ������
#define Max 10
int main()
{
	int num[Max] = {0};
	printf("%d\n", Max);
	return 0;
}