// Perform arithmetic operation based on user's choice

#include<stdio.h>

int main(){
    int a,b;
    char op;
    printf("Enter Operator(eg:+,_,*,/).....:");
    scanf("%c", &op);
    printf("Enter the value of a & b:");
    scanf("%d%d",&a,&b);
    switch(op)
    {
        case '+':
            printf("Result: %d", a+b);
            break;
        case '-':
            printf("Result: %d", a-b);
            break;
        case '*':
            printf("Result: %d", a*b);
            break;
        case '/':
            printf("Result: %d", a/b);
            break;
        default:
            printf("Invalid operator.....");
    }
    return 0;
}
