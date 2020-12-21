#include <stdio.h>
/*
求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。
*/
int main(void)
{
    int s=0, m=1, n;
    printf("please input n: \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        m = m*i;
        s = s +m;
    }
    printf("%d \n", s);
}