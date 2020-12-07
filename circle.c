#include<stdio.h>
#define PI 3.1415926
int main(void){
    float r;
    float c;
    scanf("%f", &r);
    c = PI*r*r;
    printf("%.2f", c);
    return 0;
}