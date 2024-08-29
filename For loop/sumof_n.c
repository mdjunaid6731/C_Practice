// Claculate the sum of given numbers by user

#include<stdio.h>

int main(){
    int i, n, newn, sum=0;
    printf("Enter the number of value to add:");
    scanf("%d",&n);
    printf("Enter the values:\n");
    for (i=1; i<=n; i++){
        scanf("%d",&newn);
        sum = sum + newn;
    }
    printf("Sum of given values is %d", sum);
    return 0;
}
