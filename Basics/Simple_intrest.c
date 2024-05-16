//Calculate simple intrest 

#include<stdio.h>

int main(){
    float p, t, r, si;
    printf("Enter the price , time and intrest: ");
    scanf("%f%f%f",&p,&t,&r);
    si = (p*t*r)/100.00;
    printf("Simple Intrest is: %f ",si);
    return 0;
    }