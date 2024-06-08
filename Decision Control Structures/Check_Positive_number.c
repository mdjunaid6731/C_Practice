//Check whether the given number is positive or negative.

#include<stdio.h>

int main(){
    float n;
    printf("Enter the number:\n");
    scanf("%f",&n);
    if(n>0)
        printf("Entered Number is Positive");
    else if(n<0)
        printf("Entered nummber is Negative");
    else
        printf("Number is Zreo");
    return 0;
}