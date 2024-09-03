// Write a program to prime number in given range

#include<stdio.h>


int main(){
    int i,newn, flag=1, n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(newn=2; newn<=n; newn++){
         flag = 1;
         for(i=2; i<=newn/2; i++){
            if(newn%i == 0){
                flag=0;
                break;
            }
         }
         if(flag == 1){
            printf("%d\n",newn);
         }
    }
    return 0;
}