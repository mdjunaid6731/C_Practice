// Count vowels in given string

#include<stdio.h>

int main(){
    char s[50];
    int i, vowels=0;
    printf("Enter string  : ");
    scanf("%s", s);
    for(i=0; s[i]!='\0'; i++){
        if((s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U')||
        (s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')){
            vowels++;
        }
    
    }
    printf("Vowels is .......: %d", vowels);
    return 0;
}