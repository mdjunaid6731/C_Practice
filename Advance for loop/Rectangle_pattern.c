/* Program to print following pattern
********************
*                  *
*                  *
*                  *
********************
*/

#include<stdio.h>

int main(){
    int i, j;
    for(i=1; i<=80; i++){
        printf("*");
    }
    printf("\n");
    for(i=2; i<=10; i++){
        printf("*");
        for(j=2; j<=79; j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(i=1; i<=80; i++){
        printf("*");
    }
    return 0;
}