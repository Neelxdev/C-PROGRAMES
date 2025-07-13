#include<iostream>
using namespace std;
int main(){
int n, i;
cout<<"\nENTER ARRAY LENGTH-->";
scanf("%d", &n);
int arr[n];
cout<<"\nTHE ELEMENTS OF ARRAY-->";
for(i = 0; i<n; i++){
    cin>>arr[i];
}
int min = arr[0];
int max = arr[0];
for(int j = 1; j<n; j++){
    if(arr[j]<min ){
        min = arr[j];
       
       
    }
      if(arr[j]>max) {
        max = arr[j];
       
      }
}
cout<<"\nTHE SMALLEST ELEMENT-->"<<min<<endl;
cout<<"\nTHE LARGEST ELEMENT-->"<<max<<endl;

return 0;
}