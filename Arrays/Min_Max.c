// Print Maximum and Minimum element from an given array

#include<stdio.h>

int main(){
    int i, n, a[20], max, min;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    max = min =a[0];
    for(i=0; i<n; i++){
        if(a[i]>max)
            max = a[i];
        if(a[i]<min)
            min = a[i];
    }
    printf("\nMAX: %d", max);
    printf("\nMIN: %d", min);
    return 0;
}
