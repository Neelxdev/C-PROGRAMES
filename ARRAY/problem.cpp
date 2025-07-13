#include<iostream>
using namespace std;
int main(){
    int num, result;
printf("ENTER THE ARRAY DIMENSION-->");
scanf("%d", &num);
int arr[num];
printf("\nTHE %d ELEMENTS OF ARRAY-->", num);
for(int i = 0; i<num; i++){
   scanf("%d", &arr[i]) ;}

    int arr2[num];
    printf("\nTHE %d ELEMENTS OF ARRAY2-->", num);
    for(int i = 0; i<num; i++){
       scanf("%d", &arr2[i]) ;
       }
       for(int i = 0; i<num; i++){
            if(arr[i] = arr2[i]){
                ;
            }
            
                cout<<result;
            
            
        }
       
       return 0;
    }
