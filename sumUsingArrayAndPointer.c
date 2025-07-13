#include<stdio.h>
int main(){
    int arr[6], sum = 0;
    int *p = arr;// or int *p = &arr[0];
    printf("THE ELEMENTS ARE-->");
    for(int i = 0; i<6; i++){
        scanf("%d", p);
        sum+=*p;
        
    }
    
        
    
    printf("\n%d", sum);
    return 0;
}