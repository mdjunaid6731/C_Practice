//Sum of all lower triangle elements in matrix
#include<stdio.h>

int main(){
    int i, j, m, n, a[5][5], sum=0;
    printf("Enter order of matrix :");
    scanf("%d%d", &m, &n);
    printf("Enter matrix elements.....:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(i>=j)
                sum = sum + a[i][j];
        }
    }
    printf("\nSum of matrix elements is : %d", sum);
    return 0;
}
