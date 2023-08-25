#include<iostream>
#include<vector>
using namespace std;
int main(){

    int arr[]= { 7,2,32,5,20};
    int n =5;

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            i++;
        }
    }
    int i;
     for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<"no"<<endl;
            break;
        }
        if(i==n-1) cout<<"yes"<<endl;
        }
return 0;
}