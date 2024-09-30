// Print array  in ascending and descending order

#include<stdio.h>

int main(){
    int i, j, n, a[20], max, min, temp;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i=0; i<n; i++){
         printf("Enter element %d : ", i+1);
         scanf("%d", &a[i]);
    }
    max = a[0];
    for(i=0; i<n; i++){
        for(j=0; j<i; j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Ascending Order....\n");
    for(i=0; i<n;  i++){
        printf("%d\n",a[i]);
    }

    min = a[0];
    for(i=0; i<n; i++){
        for(j=0; j<i; j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Desecending Order....\n");
    for(i=0; i<n;  i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
