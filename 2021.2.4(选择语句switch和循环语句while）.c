#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


 switch��䣺Ҳ��һ�ֶ��֦��䡣�������ڶ��֦�����

 ���磺

int main()
{
	 int a = 0;
	 if (a == 1)
		 printf("����һ\n");
	 else if (a == 2)
		 printf("���ڶ�\n");
	 else if (a == 3)
		 printf("������\n");
		 .
		 .
		 .
	return 0;
 }
 ��������д�ȽϷ���

 ��������switch����

case 

int main()
{
    int a = 0;
    int n = 1;
    scanf("%d", &a);
    switch (a)   //switch (���α��ʽ�� �����е�һ�������α��ʽ int
    {
    case 1: //����� case 1.0: ���ǲ��еġ���Ȼ��1һ����˼�����������������ͻᱨ���Ƿ���case���ʽ��
            //1+0 Ҳ�ǿ��Ե� ���� case n���ǲ��е� ��n�Ǳ�����
        printf("����һ\n");
        break; //��ֹ ����switch
    case 2:
        printf("���ڶ�\n");
        break;
    case 3:
        printf("������\n");
        break;
    case 4:
        printf("������\n");
        break;
    case 5:
        printf("������\n");
        break;
    }
    return 0;
} //switch ��� ;break ����;



Ҫ������1-5������ǹ����գ�����6-7������Ϣ��

int main()
{
    int a = 0;
    int b = 1;
    scanf("%d", &a);
    switch (a)   
    {
    //default:   //default ��λ�÷��Ķ���Ӱ��
       // printf("�������\n");
       //break; 
    case 1: 
        if (b == 1) //switch �п��Լ�if (���ǲ��ܼ�continue)
            printf("����һ�����ϰడ��\n");
    case 2:
        
    case 3:
        
    case 4:
        
    case 5:
        printf("������\n");
        break;
    case 6:
        
    case 7:
        printf("��Ϣ��\n");
        break;//����break ;��Ȼ�Ӳ��ӵ����岻�󣬵���Ϊ���Ժ󲹳����ʱ�����׳���
    default: 
        printf("�������\n"); //���ǰ���ֵ����ƥ�䣬default����Ƿ���������Ը������ʾ������֪���������
        break;
    }
    return 0;
}//case �����break ��һ����Ҫ�ġ�

��ϰ����� n��m��ֵ
int main()
{
	int n = 1;
	int m = 2;
	switch (n)//n=1 
	{
	    case 1: m++; //m=3
		case 2: n++; //n=2
		case 3:
			switch (n)//n=2
			{//switch ����Ƕ��ʹ��
			case 1: n++;// n==2 ;case 1����
			case 2:m++;n++;break;//m=4,n=3

			}
		case 4:m++; //m=5
			break;
		default:
			break;
	}
	printf("m=%d,n=%d\n", m, n);//m=5 ,n=3
	return 0;
}


while ѭ�����

��Ļ��ӡ1��10
int main()
{
	int a = 1;
	while (a < 11)
	{
		if (a == 5)
			break;//�������� 1 2 3 4  û��5 ����Ϊ��a==5ʱ��������ѭ��������ӡ�˾�û��5��
		printf("%d\n", a);
		a++;
	}
	return 0;
}

��break ����continue
continue :��������ѭ������Ĵ��룬���¿�ʼѭ��
int main()
{
	int a = 1;
	while (a <=10)
	{
		if (a == 5)
			continue ;//��a=5 ʱ������е�continue ����������while�����жϣ�������ѭ��һֱ��ȥ
		printf("%d\n", a);//�����1 2 3 4 ������ʲô��û��û��ƽ���Ľ�����һЩ�����������ѭ��
		a++;
	}
	return 0;
}

�ģ�
int main()
{
	int a = 0;
	while (a <= 10)
	{
		a++;
		if (a == 5)
			continue;//��a=5ʱ����ִ������Ĵ��룬����while���¿�ʼ��
		            //ִ����ȥa++ = 5+1=6 ,6!=5 ��ִ��continue,��ӡ6
		printf("%d\n", a);
		//�������� 0 1 2 3 4 6 7 8 9 10 
	
	}
	return 0;
}

while ѭ����break ��continue ������

break ֻҪ����break��ֹͣ�������е�ѭ����ֱ����ֹѭ��������������ֹѭ����
continue ������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�����ֱ����ת��while�����жϲ��֣�������һ��ѭ��������жϡ�


int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF) //getchar :��ȡ�ַ�,���ռ��������һ���ַ�����˼
		//��ȡһ���ַ��Ž���ch�ı����� ,�ж�ch���ַ��ǲ���EOF
		putchar(ch);
	return 0;
}

getchar  getchar ���÷�
int main()
{
	int ch = getchar();
	putchar(ch); //getchar֮�����putchar   putchar���getchar������ַ�
	//���ch��һ���ַ��� putchar ����ַ���˼��printf��ࡣ
	printf("%c\n", ch);
		return 0;
}


int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF) 
		putchar(ch);
	return 0;
}

Ϊʲô����EOFʱ��ѭ�����ǲ�������
����ĳ�������CTRL +Z ʱ�����Ż������
EOF  -> end of file  ->  -1
