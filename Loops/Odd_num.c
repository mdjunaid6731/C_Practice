// Print first n odd numbers
#include<stdio.h>

int main(){
    int n, i=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i = i+2;
    }
    return 0;
}
