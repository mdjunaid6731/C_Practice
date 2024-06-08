//Check whether the give number is greater then 10 or less then 10

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number to check:\n");
    scanf("%d",&n);
    if(n>10)
        printf("The number greater then 10");
    else if(n<10)
        printf("The number is less then 10");
    else    
        printf("Number is 10");
    return 0;
}