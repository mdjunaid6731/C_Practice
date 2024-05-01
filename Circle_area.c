//Area of Circle

#include<stdio.h>

int main(){
    float area, r;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    area = 3.142*r*r;
    printf("Area of a circle is %6.2f",area); //6.2 reserves 6 blocks for output value where .2 is for displaying  two digits after decimal point
    return 0;
    }