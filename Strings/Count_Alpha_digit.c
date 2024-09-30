// Count alphabets , digits and symbols from a given string
#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main(){
    char s[50];
    int i, alphabets=0, digits=0, symbols =0;
    printf("Enter string : ");
    scanf("%s", s);
    for(i=0; s[i]!='\0'; i++){
        if(isalpha(s[i])){
            alphabets++;
        }
        else if(isdigit(s[i])){
            digits++;
        }
        else{
            symbols++;
        }
    }
    printf("Alphabets : %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Symbols: %d\n", symbols);
    return 0;
}