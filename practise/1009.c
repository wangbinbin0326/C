#include <stdio.h>
#include <math.h>
//分段函数求值
int main(void)
{
    int count, num;
    scanf("%d", &num);
    int num1 = num;
    while (num!=0)
    {
        num = num/10;
        count++;
    }
    printf("%d\n",count);
    int arr[count];
    int j=count;
    int k=0, item;
    while (j>0)
    {
        item = pow(10,j-1);
        arr[k] = num1/item;
        j--;
        k++;
        num1 = num1%item;
    }
    for(int i=0; i<count; i++){
        if(i==count-1){
            printf("%d", arr[i]);
        }else
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    for(int i=count-1; i>=0; i--){
        printf("%d", arr[i]);
    }
    return 0;
}