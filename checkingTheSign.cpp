#include<stdio.h>
int main(){

int num ;
printf("ENTER THE ARRAY DIMENSION-->");
scanf("%d", &num);
int arr[num];
printf("\nTHE %d ELEMENTS OF ARRAY-->", num);
for(int i = 0; i<num; i++){
   scanf("%d", &arr[i]) ;
   
    }
    for(int i = 0; i<num; i++){
        if(arr[i]>0){
            printf("\nTHE ELEMENT %d IS POSITIVE", arr[i]);
        }else if(arr[i]==0){
            printf("\nTHE %d ELEMENT IS ZERO", arr[i]);
        }else{
            printf("\nTHE ELEMENT IS NEGATIVE");
        }
    }
   
    return 0;
}