#include<iostream>
using namespace std;
int main(){

     int arr[]= {0,0,1,1,1,1};
     int n = 6;

     int lo = 0;
     int hi = n-1;
     int ans = -1;

     while(lo<=hi){
        int mid = (hi+lo)/2;
        if(arr[mid]==1){
            ans = mid;
            hi = mid -1;
        }
        else{
            lo = mid +1;
        }
        

     }
     cout<< n -ans;

        
    return 0;
}