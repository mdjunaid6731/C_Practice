//Write program to calculate average of  given numbers

#include<stdio.h>

int main(){
    int i, newn, n, sum_avg=0;
    float avg;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Enter the numbers:.....");
    for(i=1; i<=n; i++){
        scanf("%d",&newn);
        sum_avg = sum_avg+newn;
    }
    avg = sum_avg/(float)n;  //Type Casting
    printf("\n Average = %f",avg);
    return 0;
}