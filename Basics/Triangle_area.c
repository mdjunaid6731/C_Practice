//Area of Triangle

#include<stdio.h>

int main(){
    float H, B, Area;
    printf("Enter the height of a triangle: ");
    scanf("%f",&H);
    printf("Enter the base of a triangle: ");
    scanf("%f",&B);
    Area = 0.5 * H * B;
    printf("Area of a triagnle is %f",Area);
    return 0;
    }