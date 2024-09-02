// Reverse the given number
#include<stdio.h>

int main(){
    int n, rem;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n>0){
        rem = n%10;     // if num is 153 then rem will be 3
        printf("%d",rem);
        n = n/10;       // 153/10 = 15, now will go back to while and continues same procedure
    }
    return 0;
}
