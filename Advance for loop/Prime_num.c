// Write a program to check number is prime or not

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(i=2; i<=n/2; i++){
         if(n%i == 0){
            printf("Not Prime");
            exit(0);                  //program will exit here if it is not prime
         }
    }
    printf("prime");
    return 0;
}