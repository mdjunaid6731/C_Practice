// print sum of given nnumber
#include<stdio.h>

int main(){
    int n, rem,sum = 0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n>0){
        rem = n%10;     // if num is 153 then rem will be 3
        sum = sum + rem; // In first itteration sum holds 3
        n = n/10;       // 153/10 = 15, now will go back to while and continues same procedure
    }
    printf("Sum of given number is.........%d",sum);
    return 0;
}
