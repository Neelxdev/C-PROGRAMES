#include<stdio.h>
int maxMinCount(int arr[], int size, int *max, int *min){
    *min = *max =  arr[0];
    for(int i = 0; i<size; i++){
        if(arr[i] > *max){
            *max = arr[i];
        }
        if(arr[i] < *min){
            *min = arr[i];
        }

    }
}
int main(){
    int n, max, min;
    printf("ENTER ARRAY LENGTH-->");
    scanf("%d", &n);
    int arr[n];
    printf("\nENTER THE ELEMENTS OF ARRAY OF SIZE %d\n", n);
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    maxMinCount(arr, n, &max, &min);
    printf("THE LARGEST ELEMENT-->%d\nTHE SMALLEST ELEMENT-->%d", max, min);
    return 0;
}

