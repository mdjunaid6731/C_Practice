//Print ASCII Chart


#include<stdio.h>

int main(){
    int i;
    for(i=1; i<=255; i++){
        printf("%d=%c\t",i,i);
    }
    return 0;
}