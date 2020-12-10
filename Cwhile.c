#include<stdio.h>
#define PI 3.1415926
int main(void){
    int i=0;
    int j=0;
    while(i++<10){
        printf("i=%d \n", i);
    }
    do {
        printf("j=%d \n", j);
    }while(j++<10);
}