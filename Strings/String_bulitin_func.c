// Print string in reverse order, its length, in uppercase, in lowercase and copy into another string

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char s1[50], s2[50];
    printf("Enter string : ");
    scanf("%s", s1);
    strcpy(s2, s1);
    printf("Copied String: %s\n", s2);
    printf("Reverse String: %s\n", strrev(s2));
    int len = strlen(s1);
    printf("Length : %d\n", len);
    printf("Upper case: %s\n", strupr(s1));
    printf("Lower case: %s\n", strlwr(s1));
    
    return 0;
}