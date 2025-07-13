#include<stdio.h>
int main(){
    int m, n;
    printf("ENTER THE DIMENSIONS OF TWO MATRICES-->");
    scanf("%d, %d", &m, &n);
    int a[m][n];
    printf("THE ELEMENTS OF ARRAY A[%d][%d]-->", m, n);
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            scanf("%d,", &a[i][j]);
        }
    }
    
    int b[m][n];
    printf("THE ELEMENTS OF ARRAY B[%d][%d]-->", m, n);
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            scanf("%d,", &b[i][j]);
        }
    }
    for(int i = 0; i<m; i++){
        for(int j= 0; j<n; j++){
            printf("a[%d][%d]=%d\n", i, j, a[i][j]);
        }
    }
     for(int i = 0; i<m; i++){
        for(int j= 0; j<n; j++){
            printf("b[%d][%d]=%d\n", i, j, b[i][j]);
        }
    }
    int c[m][n];
    printf("THE ELEMENTS OF ARRAY C[%d][%d]-->\n", m, n);
     for(int i = 0; i<m; i++){
        for(int j= 0; j<n; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("c[%d][%d]=%d\n", i, j, c[i][j] );
        }
    }
    
 

    return 0;
}