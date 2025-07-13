#include<iostream>
using namespace std;
void swaping(int arr[], int size){
    int start = 0, end = size-1;
    
    
    while (start<end){
    swap(arr[start], arr[end]);    
        start++;
        end--;
    }
    
    
}
int main(){
    int num ;
printf("ENTER THE ARRAY DIMENSION-->");
scanf("%d", &num);
int arr[num];
printf("\nTHE %d ELEMENTS OF ARRAY-->", num);
for(int i = 0; i<num; i++){
   scanf("%d", &arr[i]) ;
   
    }
 
 swaping(arr, num);
 for(int i = 0; i<num; i++){
    cout<<arr[i]<<" ";
 }
    return 0;
}