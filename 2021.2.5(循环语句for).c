#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 0;
	while ((a = getchar()) != EOF) //EOF -end of file(-1)  文件结束标志
		                           //可以鼠标右击点击EOF ，选择 转到定义 可以看到EOF其实是-1
	{
		putchar(a);
	}
	
	return 0;
}

EOF作用：

int main()
{
	int ret = 0;
	
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);//输入密码，并存放在password数组中
	printf("请确认:>");
		ret = getchar();  //  Y/N
       //当程序走到上面时候，ret获得的值是10 。经过ASCII码表10就是我们上面输入密码字符时敲的回车键（换行）
       //10!=Y 所以程序直接走else，跳过了getchar
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认放弃\n");
	}
	return 0;
}


int main()
{
	printf("%d", '\n'); //结果是10
	return 0;
}//这里可以看出 \n 的值就是10

解析：输入时有输入缓冲区。当我们输入密码后（1234），其实密码后敲了个（\n），总的来说就是（1234\n)。
我们的scanf函数在读这个密码的时候仅仅把1234存储进password空间。而现在缓冲区还留有个（\n）,代码再往下走getchar看到缓冲区还有个\n
getchar就直接读取\n,进入if判断 \n 不是Y那就直接走else了。


解决：
int main()
{
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);
	//缓冲区还有个'\n'
	//读取一下‘\n'
	getchar();
	printf("请确认:>");
	ret = getchar(); 
	if (ret == 'Y')
{
	printf("确认成功\n");
}
	else
{
    printf("确认放弃\n");
}
	return 0;
}

但是当输入（1234 ABCD） 时，程序又会跳过if判断语句直接输出else的结果

为什么会出现上面的情况呢?
scanf 函数只会读取空格前面的函数，scanf读取1234后，后面还有（ ABCD),而下面的getchar又把空格读取了
当程序到达ret=getchar ()时，他就会读取ABCD,而ABCD显然是！=Y的，所以结果直接输出else的结果

最终的解决方法：
思路  ：可以加个while循环，让程序一直读取scanf的数，直到读取完了所有的数
int main()
{
	 char password[20] = { 0 };
	 int ch = 0;
	int ret= 0;
	printf("请输入密码:>");
	scanf("%s", password);
	while ((ch = getchar() )!= '\n')
	{
		; //里面不需要条件就可以直接打个 ;
	}
	printf("请确认:>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认放弃\n");
	}

	return 0;
}





代码2；

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
		//逻辑或 || 只要两个表达式其中一个为真，就进行下去-continue ，只有两个为假（1-9）则跳出if
        //(ch < '0' || ch>'9'),输入的字符只要是ASCII码表左边小于数字0的字符或者右边大于数字9的字符 结果都是真。
       //if结果为真则执行continue 程序跳回到while 这样就死循环没有任何东西表示出来。
       //如果为1-8的字符则为假，不执行if下面的语句，跳出循环。执行putchar
			continue;
		putchar(ch);
	}
	return 0;
}



while 循环 一般的使用程序：
int main()
{
	int a = 0; //初始化
	if (a < 10)//判断
	{
		//...
		a++; //调整
	}
	return 0;
}
而当我们中间的代码比较多时，修改数值很容易出错。而for循环则很好解决这问题。

for (表达式1;表达式2;表达式3)
举例：
int main()
{
	int a = 0;
	for (a = 1;a < 10;a++) //初始化；判断；调整
	{
		if (a == 5)
			break;
		printf("%d", a); //输出是1 2 3 4  break是跳出整个for循环
	}
	return 0;
}


int main()
{
	int a = 0;
	for (a = 1;a < 10;a++) //初始化；判断；调整
	{
		if (a == 5)
			continue;
		printf("%d", a); //输出是1 2 3 4 6 7 8 9 continue是跳出这一次的循环，从新回到for开始
	}
	return 0;
}