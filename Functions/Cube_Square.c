// program with function for cube and square
#include<stdio.h>

int square(int x){
    return x*x;
}

int cube(int x){
   return x*x*x;
}


int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Square is %d", square(n));
    printf("\nCube is %d", cube(n));
    return 0;
}
