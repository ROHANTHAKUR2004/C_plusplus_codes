#include<iostream>
#include<vector>
#include<string>
using namespace std;
 
   void insertionSort(int arr[], int n){
    int i,key,j;
    for(int i=1;i<n;i++){
        key = arr[i];
        j= i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j =j-1;
        } 
        arr[j+1]= key;
    }
   }

int main(){

 int arr[]= {7,2,32,5,20};
 int n =5;

  insertionSort(arr,n);

  int a = 0;
  int b = 0;

  for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
  }

    return 0;
}