#include<iostream>
using namespace std;
int main(){
    int arr[]={2,1,0,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // cyclic  sort
    int i =0;
    while(i<n){
        int correctIdx = arr[i];
        if(i==correctIdx || arr[i]==n) i++;
        else swap(arr[i],arr[correctIdx]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i) cout<<i<<" ";
    }
    cout<<endl;
}