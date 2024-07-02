//Demonstration of conditional operator to write if statement in one line

#include<stdio.h>
#include<conio.h>

int main(){
    int a,b;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("Largest value is %d\n", (a > b) ? a : b);
    return 0;
}

