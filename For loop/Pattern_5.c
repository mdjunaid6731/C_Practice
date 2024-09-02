/* Write a program to print following pattern
    *
   **
  ***
 ****
*****
*/ 

#include<stdio.h>

int main(){
    int i, j, k, n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(i=n; i>=1; i--){
        for(k=1; k<i; k++){
            printf(" ");
        }
        for(j=i; j<=n; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}