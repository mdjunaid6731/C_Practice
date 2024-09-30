// Print Positive and negative array elements  separately

#include<stdio.h>

int main(){
    int i, n, a[20];
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++){
        printf("Enter element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    printf("\n Negative elements:");
    for(i=0; i<n; i++){
        if(a[i]<0)
            printf("\n %d", a[i]);
    }

    printf("\n Positive elememts:");
    for(i=0; i<n; i++){
        if(a[i]>0)
            printf("\n %d", a[i]);
    }
    return 0;
}
