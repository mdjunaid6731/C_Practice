//Print transpose of matrix

#include<stdio.h>

int main(){
    int i, j, m, n, a[5][5];
    printf("Enter order of matrix :");
    scanf("%d%d", &m, &n);
    printf("Enter matrix elements.....:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Transpose of matrix\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
