// Addition of M x N array/matrix

#include<stdio.h>

int main(){
    int i, j, m, n, a[5][5], b[5][5], c[5][5];
    printf("Enter order of matrix :");
    scanf("%d%d", &m, &n);
    printf("Enter first matrix elements.....:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter Seconf matrix elements.....:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("***RESULTANT MATRIX****\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
