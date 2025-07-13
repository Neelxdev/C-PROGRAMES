#include<stdio.h>
int main(){
    int j;
  int arr[2][3]={{5,3}, {9, 7, 8}};

for(int i=0; i<2; i++){
    for( j=0; j<3; j++){
        printf("arr[%d]arr[%d]=%d\n", i, j, arr[i][j]);
    }
}
arr[0][0]=0;
printf("%d", arr[0][0]);

    return 0;
}