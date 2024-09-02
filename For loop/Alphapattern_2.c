/* Write a program to print following pattern
ABCDEEDCBA
ABCD  DCBA
ABC    CBA
AB      BA
A        A
*/

#include<stdio.h>

int main(){
    int i, j, k, n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(i=n-1; i>=0; i--){
        for(j=0; j<=i; j++){
            printf("%c", 65+j);
        }
        for(k=1; k<(n-i); k++){
            printf("  ");
        }
        for(j=i; j>=0; j--){
            printf("%c", 65+j);
        }
        printf("\n");
    }
    return 0;
}