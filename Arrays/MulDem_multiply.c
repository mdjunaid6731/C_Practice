#include<stdio.h>

int main(){
    int i, j, k, m, n, a[5][5], b[5][5], c[5][5];
    printf("Enter order of matrix :");
    scanf("%d%d", &m, &n);
    printf("Enter first matrix elements.....:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix elements.....:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            c[i][j]=0;
            for(k=0; k<m; k++){
                c[i][j] = c[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    printf("*** RESULTANT ***\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
