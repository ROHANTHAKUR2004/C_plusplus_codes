#include<iostream>
using namespace std;
int main(){

   int arr[] = {1,2,4,5,9,15,18,21,24};
   int n = 9;
   int x = 16;// lower bound ans = 15;

   int lo = 0;
   int hi = n-1;
   bool flag  = false;
   while(lo<=hi){
    int mid = lo+(hi-lo)/2;
    if(arr[mid]==x){
        flag = true;
        cout<< arr[mid-1];// upper bound  = mid+1;

        break;
    }
    else if(arr[mid]<x)  lo = mid +1;
    else hi = mid -1;

   }
   if(flag == false){
    cout<<arr[hi]; //upper bound ke liye low print karwa do bss
   }



}