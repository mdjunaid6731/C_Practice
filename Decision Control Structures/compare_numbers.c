//compare two numbers

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("%d is greater then %d",a,b);
    else if(b>a)
        printf("%d is greter then %d",b,a);
    else
        printf("Both are equal");
    return 0;
}