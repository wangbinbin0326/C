#include<stdio.h>
//逆序输出这个三位数,输出个位、十位、百位，三个数字，用空格分开
int main(void){
    int num, arr[3];
    scanf("%d", &num);
    arr[0] = num%10;
    arr[1] = num/10%10;
    arr[2] = num/100;
    printf("%d %d %d", arr[0], arr[1], arr[2]);
    return 0;
}