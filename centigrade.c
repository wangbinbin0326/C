#include<stdio.h>
int main(void){
    float F;
    scanf("%f", &F);
    float c = 5*(F-32)/9;
    printf("%.2f", c);
    return 0;
}