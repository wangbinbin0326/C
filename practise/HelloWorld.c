#include <stdio.h>
#include <math.h>
//分段函数求值
int main(void)
{
    int arr[5]; /*定义5个整数的数组 */
    int i, j;
    /* 初始化数组元素 */    
    for(i=0; i<5; i++){
        arr[i] = i+1;
    }
    for(j=0; j<5; j++){
        printf("arr[%d]: %d \n", j, arr[j]);
    }
    return 0;
}