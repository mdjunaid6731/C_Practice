// Copy string from another string without using inbulit funnction
#include<stdio.h>

int main(){
    char s1[50], s2[50];
    int i, len=0;
    printf("Enter string  : ");
    scanf("%s", s1);
    for(i=0; s1[i]!='\0'; i++){
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("Copied string is .......: %s\n", s2);
    return 0;
}