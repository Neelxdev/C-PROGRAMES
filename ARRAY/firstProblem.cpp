#include<stdio.h>
int main(){
    int n;
    printf("\nENTER THE ARRAY LENGTH-->");
    scanf("%d", &n);
    int arr[n];
    printf("\nTHE ELEMENT ARE = ");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }


    return 0;
}