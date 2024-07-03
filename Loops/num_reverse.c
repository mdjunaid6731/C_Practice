// print 1 to n using do while(In reverse order)
#include<stdio.h>

int main(){
    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    i = n;
    do
    {
        printf("%d\n",i);
        i--;
    } while (i>=1);
    
    return 0;
}
