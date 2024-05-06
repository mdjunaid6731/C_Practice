//Swaping of two numbers
#include<stdio.h>
int main(){
    int a , b , temp;
    printf("Enter two values to swap: ");
    scanf("%d%d",&a,&b);
    printf("Before Swapping a = %d and b = %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("After Swapping a = %d and b = %d\n",a,b);
    return 0;
}