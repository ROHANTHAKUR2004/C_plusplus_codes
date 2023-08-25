#include<iostream>
using namespace std;
int main(){
     
      int arr[]={1,2,4,5,9,15,18,21};
      int x = 3;
      int n = 8;
    
     int lo =0;
     int hi = n-1;
     while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==x)  { 
            cout<<mid;
            break;
        }
        else if(arr[mid]<x){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
     } 
     return 06;
}