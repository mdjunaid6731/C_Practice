//Caculate square and cude for given number

#include<stdio.h>

int main(){
    int n, square, cube;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    square = n*n;
    cube = n*n*n;
    printf("Square: %d \nCube: %d ", square, cube);
    return 0;
    }