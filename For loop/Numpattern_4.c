/* Write a program to print following pattern
1
11
121
1231
12341
123451
*/

#include<stdio.h>

int main(){
    int i, j, n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(i=0; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("1\n");
    }
    return 0;
}