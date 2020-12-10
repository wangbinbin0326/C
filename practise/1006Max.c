#include <stdio.h>
//有三个整数a b c,由键盘输入，输出其中的最大的数。
int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    //printf("a=%d, b=%d, c=%d", a, b, c);
    //way1
    if (a >= b)
    {
        if (a >= c)
        {
            printf("%d", a);
        }
        else
        {
            printf("%d", c);
        }
    }
    else
    {
        if (b >= c)
        {
            printf("%d", b);
        }
        else
        {
            printf("%d", c);
        }
    }
    //way2
    int t;
    if (a > b)
        t = a;
    else
        t = b;
    if (c > t)
        t = c;
    printf("%d\n", t);
    return 0;
}