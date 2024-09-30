// Calculate length  of string without using inbulit funnction
#include<stdio.h>

int main(){
    char s[50];
    int i, len=0;
    printf("Enter string  : ");
    scanf("%s", s);
    for(i=0; s[i]!='\0'; i++){
        len++;
    }
    printf("Length of the string is .......: %d\n", len);
    return 0;
}