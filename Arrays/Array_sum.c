//Print the addition of array elements

#include<stdio.h>

int main(){
    int i, n, a[20], sum=0;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        sum = sum + a[i];
    }
    printf("\n Sum of given array elements is : %d", sum);
    return 0;
}
