/* Write a program to print digits, alphabets using loops
ASCII CODE:
A=65 ........ Z=90
a=97 ........ z=122
0=48 ........ 9=57
*/
#include<stdio.h>


int main(){
    int i;

    for(i=65; i<=90; i++){
        printf("%c,",i);
    }

    printf("\n\n\n");
    for(i=97; i<=122; i++){
        printf("%c,",i);
    }

    printf("\n\n\n");
    for(i=48; i<=57; i++){
        printf("%c\t",i);
    }
    return 0;
}