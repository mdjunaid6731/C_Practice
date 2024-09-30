//Accept array elements and reprint

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
    for(i=0; i<n; i++){
        printf("\n Element %d : %d", i+1, a[i]);
    }
    return 0;
}
