#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 0;
	while ((a = getchar()) != EOF) //EOF -end of file(-1)  �ļ�������־
		                           //��������һ����EOF ��ѡ�� ת������ ���Կ���EOF��ʵ��-1
	{
		putchar(a);
	}
	
	return 0;
}

EOF���ã�

int main()
{
	int ret = 0;
	
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);//�������룬�������password������
	printf("��ȷ��:>");
		ret = getchar();  //  Y/N
       //�������ߵ�����ʱ��ret��õ�ֵ��10 ������ASCII���10���������������������ַ�ʱ�õĻس��������У�
       //10!=Y ���Գ���ֱ����else��������getchar
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ�Ϸ���\n");
	}
	return 0;
}


int main()
{
	printf("%d", '\n'); //�����10
	return 0;
}//������Կ��� \n ��ֵ����10

����������ʱ�����뻺���������������������1234������ʵ��������˸���\n�����ܵ���˵���ǣ�1234\n)��
���ǵ�scanf�����ڶ���������ʱ�������1234�洢��password�ռ䡣�����ڻ����������и���\n��,������������getchar�������������и�\n
getchar��ֱ�Ӷ�ȡ\n,����if�ж� \n ����Y�Ǿ�ֱ����else�ˡ�


�����
int main()
{
	int ret = 0;
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);
	//���������и�'\n'
	//��ȡһ�¡�\n'
	getchar();
	printf("��ȷ��:>");
	ret = getchar(); 
	if (ret == 'Y')
{
	printf("ȷ�ϳɹ�\n");
}
	else
{
    printf("ȷ�Ϸ���\n");
}
	return 0;
}

���ǵ����루1234 ABCD�� ʱ�������ֻ�����if�ж����ֱ�����else�Ľ��

Ϊʲô���������������?
scanf ����ֻ���ȡ�ո�ǰ��ĺ�����scanf��ȡ1234�󣬺��滹�У� ABCD),�������getchar�ְѿո��ȡ��
�����򵽴�ret=getchar ()ʱ�����ͻ��ȡABCD,��ABCD��Ȼ�ǣ�=Y�ģ����Խ��ֱ�����else�Ľ��

���յĽ��������
˼·  �����ԼӸ�whileѭ�����ó���һֱ��ȡscanf������ֱ����ȡ�������е���
int main()
{
	 char password[20] = { 0 };
	 int ch = 0;
	int ret= 0;
	printf("����������:>");
	scanf("%s", password);
	while ((ch = getchar() )!= '\n')
	{
		; //���治��Ҫ�����Ϳ���ֱ�Ӵ�� ;
	}
	printf("��ȷ��:>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ�Ϸ���\n");
	}

	return 0;
}





����2��

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
		//�߼��� || ֻҪ�������ʽ����һ��Ϊ�棬�ͽ�����ȥ-continue ��ֻ������Ϊ�٣�1-9��������if
        //(ch < '0' || ch>'9'),������ַ�ֻҪ��ASCII������С������0���ַ������ұߴ�������9���ַ� ��������档
       //if���Ϊ����ִ��continue �������ص�while ��������ѭ��û���κζ�����ʾ������
       //���Ϊ1-8���ַ���Ϊ�٣���ִ��if�������䣬����ѭ����ִ��putchar
			continue;
		putchar(ch);
	}
	return 0;
}



while ѭ�� һ���ʹ�ó���
int main()
{
	int a = 0; //��ʼ��
	if (a < 10)//�ж�
	{
		//...
		a++; //����
	}
	return 0;
}
���������м�Ĵ���Ƚ϶�ʱ���޸���ֵ�����׳�����forѭ����ܺý�������⡣

for (���ʽ1;���ʽ2;���ʽ3)
������
int main()
{
	int a = 0;
	for (a = 1;a < 10;a++) //��ʼ�����жϣ�����
	{
		if (a == 5)
			break;
		printf("%d", a); //�����1 2 3 4  break����������forѭ��
	}
	return 0;
}


int main()
{
	int a = 0;
	for (a = 1;a < 10;a++) //��ʼ�����жϣ�����
	{
		if (a == 5)
			continue;
		printf("%d", a); //�����1 2 3 4 6 7 8 9 continue��������һ�ε�ѭ�������»ص�for��ʼ
	}
	return 0;
}