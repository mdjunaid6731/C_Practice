/* Write a program to print following pattern
*****
*****
*****
*****
*****
*/

#include<stdio.h>

int main(){
    int i, j, n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){  //for loop for iterating rows
        for(j=1; j<=n; j++){  //for loop for iterating colums
            printf("*");
        }
        printf("\n");
    }
    return 0;
}