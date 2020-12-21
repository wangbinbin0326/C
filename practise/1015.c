#include <stdio.h>
#include <math.h>
/*
求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。
*/
int main(void)
{
    int a, b, c;
    double s, s1=0, s2=0, s3=0;
    scanf("%d%d%d", &a, &b, &c);
    for (int i = 1; i <= a; i++)
    {
        s1 = s1 + i;
    }
    for (int j = 1; j <= b; j++)
    {
        s2 = s2 + pow(j,2);
    }
    for (int k = 1; k <= c; k++)
    {
        s3 = s3 + 1.0/k;
    }
    s = s1 + s2 + s3;
    
    printf("%.2lf \n", s);
}