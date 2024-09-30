// Concatenate two strings
#include<stdio.h>
#include<string.h>

int main(){
    char s1[50], s2[50];
    printf("Enter string 1 : ");
    scanf("%s", s1);
    printf("Enter string 2 : ");
    scanf("%s", s2);
    printf("Concatenated string .......: %s\n", strcat(s1,s2));
    return 0;
}