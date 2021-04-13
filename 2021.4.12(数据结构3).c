#include<stdio.h>
#include<string.h>
int main()
{
    int i=-20;
    unsigned int j=10;
    printf("%d\n",i+j);
    //按照补码的形式进行运算，最后格式化成为有符号整数
    return 0;
}
//10000000 00000000 00000000 00010100 -20的原码
//11111111 11111111 11111111 11101011  -反码
//11111111 11111111 11111111 11101100  -补码
//00000000 00000000 00000000 00001010  10的补码
//11111111 11111111 11111111 11110110  -20+10的补码
//11111111 11111111 11111111 11110101   -反码
//10000000 00000000 00000000 00001010  -原码
//-10   

#include<unistd.h> //lunix下 sleep(10) 10就是10秒
//#include<windows.h> //windows下  sleep(1000) 就是休眠1000ms 也就是1s

int main()
{
    unsigned int i;
    for(i=9;i>=0;i--)
    {
        printf("%u\n",i);
         sleep(1);
    }
    return 0;
}
//answer: 9 8 7 6 5 4 3 2 1 0 很大的数。。。。死循环

int main()
{
    char a[1000];
    int i;
    for(i=0;i<1000;i++)
    {
        a[i]=-1-i;
    }
    printf("%d",strlen(a));
    return 0;
}
//answer : 255
//解析： a[1000]={-1,-2,-3...,-1000} strlen会找到\0才停止；那么它就有可能会是随机值
//但是 char类型 它的值是-128～127 ，而当数组a里面到达-128时 ，它的下一个值就是127 ，126 ...0 当出现0时被strlen函数判断为\0 那么计算就会结束  -1～-128 127～0  那么相加就是255


unsigned char i=0;
int main()
{
    for(i=0;i<=255;i++)
    {
        printf("hello world\n");
    }
    return 0;
}
//answer hello world ...死循环
//解析： 当i=255+1 时 i=0


//浮点型在内存中的存储
int main()
{
    int n=9;
    float *pFloat =(float *)&n;
    printf("n=%d\n",n);
    printf("pFloat= %f\n",*pFloat);

    *pFloat =9.0;
    printf("num=%d\n",n);
    printf("*pFloat= %f\n",*pFloat);
    return 0;
}
//answer :
//n=9
//pFloat= 0.000000
//num=1091567616
//*pFloat= 9.000000
