/* Write a program to print following pattern
1
22
333
4444
55555
*/

#include<stdio.h>

int main(){
    int i, j, n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}