//Check given number is divisible by 7 or not

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if(n%7==0)
        printf("Number is divisible by 7");
    else
        printf("Number is not divisible by 7");
    return 0;
}