/* Write a program to print following pattern
    A
   BBB
  CCCCC
 DDDDDDD
EEEEEEEEE
*/

#include<stdio.h>

int main(){
    int i, j, k, n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(k=1; k<=(n-i); k++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("%c", 64+i);  //ASCII value for 'A' is 65
        }
        for(j=2; j<=i; j++){
            printf("%c", 64+i);
        }
        printf("\n");
    }
    return 0;
}