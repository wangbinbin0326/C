#include <stdio.h>
//分段函数求值
int main(void)
{
    int score;
    scanf("%d", &score);
    if (score>=90)
    {
        printf("A");
    }
    else if (80<=score && score<90)
    {
        printf("B");
    }
    else if (70<=score && score<80) 
    {
        printf("C");
    }
    else if (60<=score && score<70) 
    {
        printf("D");
    }
    else
    {
        printf("E");
    }
    return 0;
}