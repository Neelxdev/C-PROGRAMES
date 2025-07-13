#include<stdio.h>
float avg(int arr[], int size){
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum+=arr[i];
    }
    float avg = (float)sum/(float)size;
    return avg;
}
int main(){
    int n;
    printf("ENTER THE SIZE-->");
    scanf("%d", &n);
    int a[n];
    printf("\nENTER THE ELEMENTS OF ARRAY OF SIZE %d-->", n);
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    float result = avg(a, n);
    printf("\nTHE AVERAGE OF THE ARRAY NUMBERS IS -->%f", result);


    return 0;
}