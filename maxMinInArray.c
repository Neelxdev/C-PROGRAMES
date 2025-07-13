#include<stdio.h>
int main(){
   int arr[7] = {1, 4, 5, 10, 9 , -1, 50};
   int max = arr[0];
   int min = arr[0];
   for(int i = 0; i<7; i++){
    if(max<arr[i])
    max = arr[i];
    if(min>arr[i])
    min = arr[i];
    }
    printf("\nThe maximum = %d", max);
     
    printf("\nThe minimum = %d", min);

    return 0;
}