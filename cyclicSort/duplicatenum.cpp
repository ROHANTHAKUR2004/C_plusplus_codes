#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,2,1,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // cyclic  sort
    int i =0;
     
    while(i<n){
        int correctIdx = arr[i]; 
        if(arr[correctIdx]==arr[i]);
        else swap(arr[i],arr[correctIdx]);
    
    for(int i=0;i<n;i++){
         if(arr[correctIdx]==arr[i]) cout<<arr[i]<<" ";
         break;
    }
    cout<<endl;
    } 
}