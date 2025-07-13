#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    int product = 1;
    cout<<"ENTER THE SIZE OF THE ARRAY:";
    cin>>n;
    int arr[n];
    cout<<"\nTHE ELEMENTS OF ARRAY:";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++){
        sum += arr[i];
        product *= arr[i];
    }
    cout<<"\nTHE SUM OF THE ELEMENTS-->"<<sum<<endl;
    cout<<"THE PRODUCT OF THE ELEMENTS-->"<<product<<endl;
    return 0;

}