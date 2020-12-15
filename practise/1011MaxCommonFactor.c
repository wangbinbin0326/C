#include <stdio.h>
#include<time.h>
/*
最大公约数：与最小公倍数相对应的概念是最大公约数，a，b的最大公约数记为（a，b）
欧几里得算法：辗转求余
原理： gcd(a,b)=gcd(b,a mod b) 两个整数的最大公约数 = 较小的那个数 / 两数相除余数
定理：两个整数的最大公约数等于其中较小的那个数和两数相除余数的最大公约数。
当b为0时，两数的最大公约数即为a
*/
unsigned int MaxCommonFactor(int a, int b){
    if(b<=0){
        return a;
    }else 
    {
        return MaxCommonFactor(b, a%b);
    }
}

unsigned int GCD(int a, int b){
    int remainder;
    while (b>0)
    {
        remainder = a%b;
        a = b;
        b = remainder;
    }
    return a;
    
}

/*
最大公倍数：两个或多个整数公有的倍数叫做它们的公倍数，
其中除0以外最小的一个公倍数就叫做这几个整数的最小公倍数。整数a，b的最小公倍数记为[a，b]，
由于两个数的乘积等于这两个数的最大公约数与最小公倍数的积。即（a，b）×[a，b]=a×b。
所以，求两个数的最小公倍数，就可以先求出它们的最大公约数，然后用上述公式求出它们的最小公倍数。
[a，b]=a×b/（a，b）
*/

unsigned LeastCommonMultiple(int a, int b){
    int gcd = MaxCommonFactor(a, b);
    int lcm = a * b / gcd;
    return lcm;
}

int main(void)
{
    int a, b;
    clock_t start, close;
    double duration;
    scanf("%d %d", &a, &b);
    printf("the Max common factor of %d and %d is ",a,b);
    start = clock();
    //printf("%d", MaxCommonFactor(a, b));
    printf("%d", GCD(a, b));
    printf("\n");
    close = clock();
    duration = (double)(close - start)/CLOCKS_PER_SEC;
    printf("time=%lf seconds\n", duration);
    printf("the least common multiple of %d and %d is \n",a,b);
    printf("%d \n", LeastCommonMultiple(a, b));

    return 0;
}