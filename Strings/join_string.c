// Join two string without using inbulit function
#include<stdio.h>

int main(){
    char s1[50], s2[50];
    int i, j, len=0;
    printf("Enter string 1  : ");
    scanf("%s", s1);
    printf("Enter string 2  : ");
    scanf("%s", s2);
    for(i=0; s1[i]!='\0'; i++){
        len++;
    }
    j=0;
    for(i=len; s2[j]!='\0'; i++){
        s1[i] = s2[j];
        j++;
    }
    s1[i] = '\0';
    printf("Resultant string is .......: %s\n", s1);
    return 0;
}