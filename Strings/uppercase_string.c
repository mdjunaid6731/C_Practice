// Convert string to upper case without using inbulit function
#include<stdio.h>

int main(){
    char s[50];
    int i;
    printf("Enter string  : ");
    scanf("%s", s);
    for(i=0; s[i]!='\0'; i++){
        if((s[i]>='a')&&(s[i]<='z')){
            s[i] = s[i] - 32; //32 is difference between A and a in ascii code
        }
    }
    printf("Resultant string is .......: %s\n", s);
    return 0;
}