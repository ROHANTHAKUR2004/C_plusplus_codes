#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"size of array : ";
    cin>>n;
     
     int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int max=arr[0];
        for(int i=0;i<n-1;i++){
            if(max<arr[i]){
                max=arr[i];
            }
          
        }
          int smax =arr[0];
          for(int i=0;i<n-1;i++){
            if(arr[i]!=max && smax<arr[i]){
                smax=arr[i];
            }
          }
          cout<<max<<endl;
          cout<<smax;
          return 0;
}