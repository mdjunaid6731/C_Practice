// Write function for printing factorial, checking prime and printing fibonacci seris

#include<stdio.h>

fact(int x){
    int i, fact=1;
    for(i=1; i<=x; i++){
        fact = fact*i;
    }
    printf("Factorial is %d", fact);
}

IsPrime(int x){
    int i;
    for(i=2; i<x-1; i++){
        if(x%i==0){
            printf("\n Not a Prime Number\n");
            return 0;
        }
    }
    printf("\nIt is a Prime Number\n");
}

fibbo(int x){
    int pre=0, cur=1, i, temp;
    printf("%d  %d", pre, cur);
    for(i=3; i<=x; i++){
        temp = cur;
        cur = pre+cur;
        pre = temp;
        printf("\t%d", cur);
    }
}

int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    fact(n);
    IsPrime(n);
    fibbo(n);
    return 0;
}
