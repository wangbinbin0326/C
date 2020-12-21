#include<stdio.h>
#include<math.h>    //写个数学函数头文件，下边用得到
int main()
{
    int a,b,c,i;                  //先定义几个变量
    double a1=0,b1=0,c1=0; //注意这边要先赋值0，否则会出现错误
    scanf("%d%d%d",&a,&b,&c);
    for(i=1;i<=a;i++)  //这边从1到a循环，注意i<=a
    {
        a1=a1+i;     //先求1~a的和
    }
    for(i=1;i<=b;i++)  //这边从1到b循环，注意i<=b
    {
       b1=b1+pow(i,2);//这边求1~b的平方和，这边用到了数学函数 pow
    }
    for(i=1;i<=c;i++)  //这边从1到c循环，注意i<=c
    {
        c1=c1+1.0/i;  //注意这里1.0，否则后面除不出来小数，
    }
    printf("%.2lf\n",a1+b1+c1);  //注意输出要保留两个小数，double类型默认输出6个小数
    return 0;
}