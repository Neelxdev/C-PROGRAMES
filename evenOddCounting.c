#include<stdio.h>
void evenOddCount(int arr[], int size, int *even, int *odd){
    *even = *odd = 0;
    for(int i = 0; i<size; i++){
        if(arr[i]%2 == 0) (*even)++;
        else (*odd)++;
    }

}
int main(){
    int n, even = 0, odd=0;
    printf("ENTER ARRAY LENGTH-->");
    scanf("%d", &n);
    int arr[n];
    printf("\nENTER THE ELEMENTS OF ARRAY OF SIZE %d\n", n);
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    evenOddCount(arr, n, &even, &odd);
    printf("\nTHE NUMBER OF EVEN ELEMENT = %d AND THAT OF ODD ELEMENT = %d", even, odd);

    return 0;
}