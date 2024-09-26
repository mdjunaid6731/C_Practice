// Program to accept two numbers and print addition,sub, mul and division, write a separate function for each operation

#include<stdio.h>

int add(int x, int y){
    return x+y;
}
int sub(int x, int y){
    return x-y;
}
int mul(int x, int y){
    return x*y;
}
int div(int x, int y){
    return x/y;
}

int main(){
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d%d", &a, &b);
    printf("\nAddition : %d\n", add(a,b));
    printf("\nSubtraction : %d\n", sub(a,b));
    printf("\nMultiplication : %d\n", mul(a,b));
    printf("\nDivision : %d\n", div(a,b));
    return 0;
}
