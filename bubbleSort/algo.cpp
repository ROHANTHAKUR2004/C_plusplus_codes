#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<" arr size : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

      //bubble sort
      for(int i=0;i<n-1;i++){ // n-1 passes
           //traverse
           for(int j=0;j<n-1-i;j++){ // j<n-1 bhi kar saktr h;
              if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
              }
           } 
      }
      cout<<endl;
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }

return 0;
}