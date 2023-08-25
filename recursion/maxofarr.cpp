#include<iostream>
using namespace std;
// void max(int arr[],int n , int idx , int mx){
//     if(idx== n){
//         cout<<mx;
//         return;
//     }
//     if(mx<arr[idx]) mx = arr[idx];
//     max(arr,n,idx+1,mx);
// }
// int main(){
//      int arr[]= {1,3,2,4,6,46,3,4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     max(arr,n,0,INT16_MIN);
// }


//PROGRAM FOR STORING ARR

 int maxarr(int arr[],int n, int idx){
    if(idx==n) return INT16_MIN;
    return max(arr[idx],maxarr(arr,n,idx+1));
 }
  int main(){
          int arr[]= {1,3,2,4,6,46,3,4};
          int n = sizeof(arr)/sizeof(arr[0]);
        cout<< maxarr(arr,n,0);
 }