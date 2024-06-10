//Calculate disccriminant to identify roots of quadratic equation

#include<stdio.h>

int main(){
    float x,r1,r2,a,b,c;
    printf("Enter the values of a b c\n");
    scanf("%f%f%f",&a,&b,&c);
    x = (b*b)-4*a*c;
    r1 = (-b+x)/2*a;
    r2 = (-b-x)/2*a;
    if(x>0)
        printf("Root are unequal.........\n");
    else if(x<0)
        printf("Roots are imaginary......\n");
    else
        printf("Root are equal.....\n");
    printf("R1 = %f\n",r1);
    printf("R2 = %f",r2);
    return 0;
}