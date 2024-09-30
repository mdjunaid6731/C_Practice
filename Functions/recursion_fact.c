// Recursive program for calculating factorial

#include<stdio.h>

int fact(int n){
    int f;
    if(n == 1){
        return 1;
    }
    else{
        f = n*fact(n-1);
    }
    return f;
}

int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("\n Factorial id ... %d", fact(n));
    return 0;
}
