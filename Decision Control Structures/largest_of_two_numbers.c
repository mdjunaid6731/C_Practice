//Check Largest of two numbers

#include<stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a, &b);
    if (a>b)
        printf("The largest number is %d",a);
    else        
        printf("The largest number is %d", b);
    return 0;
}
