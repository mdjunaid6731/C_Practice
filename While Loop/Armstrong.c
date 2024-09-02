// Check 3 digit armstrong number 153 = 1³+5³+3³
// some Armstrong numbers: 153, 370, 371, 407, 1634
#include<stdio.h>

int main(){
    int n, rem, temp, sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    temp = n;
    while(n>0){
        rem = n%10;     // if num is 153 then rem will be 3
        sum = sum+rem*rem*rem;
        n = n/10;       // 153/10 = 15, now will go back to while and continues same procedure
    }

    if (temp == sum){
        printf("Given number is Armstrong number.........");
    }
    else{
        printf("Given number is not a Armstrong nummber....");
    }
    return 0;
}
