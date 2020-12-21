#include <stdio.h>
/*
求Sn=a+aa+aaa+…+aa…aaa（有n个a）之值，其中a是一个数字，为2。 
例如，n=5时=2+22+222+2222+22222，n由键盘输入。
每一项都等于前一项乘10再加上a，即a(n) = a(n - 1) * 10 + a; 
*/

int main(void)
{
    int Sn, a, n;
    printf("please input n: \n");
    scanf("%d", &n);
    printf("please input a: \n");
    scanf("%d", &a);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        if(i==0){
            arr[i] = a;
        }else
        {
            arr[i] = arr[i-1]*10 +a;
        }
    }
    int sum=0;
    for(int j=0; j<n; j++){
        printf("%d ", arr[j]);
        //sum = sum + arr[j];
    }
    
    printf("Sn = %d \n", sum);
    return 0;
}