#include <stdio.h>
/*
利润低于或等于100000元的，奖金可提10%;
100000<I≤200000时，低于100000元的部分按10％提成，高于100000元的部分，可提成 7.5%;
200000<I≤400000时，低于200000元部分仍按上述办法提成，（下同），高于200000元的部分按5％提成；
400000<I≤600000元时，高于400000元的部分按3％提成；
600000<I≤1000000时，高于600000元的部分按1.5%提成；
I>1000000时，超过1000000元的部分按1%提成。从键盘输入当月利润I,求应发奖金总数。
*/
int main(void)
{
    int income, bonus;
    scanf("%d", &income);
    if(income<=100000){
        bonus = income*0.1;
    }else if (100000<income && income<=200000)
    {
        bonus = 100000*0.1 + (income-100000)*0.075;
    }else if (200000<income && income<=400000)
    {
        bonus = 100000*0.1 + (200000-100000)*0.075+ (income-200000)*0.05;
    }else if (400000<income && income<=600000)
    {
        bonus = 100000*0.1 + (200000-100000)*0.075+ (400000-200000)*0.05 + (income-400000)*0.03;
    }else if (600000<income && income<=1000000)
    {
        bonus = 100000*0.1 + (200000-100000)*0.075+ (400000-200000)*0.05 + (600000-400000)*0.03 + (income-600000)*0.015;
    }else
    {
        bonus = 100000*0.1 + (200000-100000)*0.075+ (400000-200000)*0.05 + (600000-400000)*0.03 + (1000000-600000)*0.015 + (income-1000000)*0.01;
    }
    printf("%d", bonus);
    
    return 0;
}