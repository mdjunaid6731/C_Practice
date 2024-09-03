// Write a program to print fibonacci series

#include<stdio.h>


int main(){
    int i, n, pre=0, cur=1, temp;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("%d\n%d",pre, cur);
    for(i=3; i<=n; i++){
        temp = cur;
        cur = pre+cur;
        pre = temp;
        printf("\n%d",cur);
    }
    return 0;
}