#include<iostream>
using namespace  std;
int main(){
    int arr[]= {1,2,2,3,3,3,3,3,4,4,5,5,9};
    int n =13;
    int x = 2;
   int lo = 0;
   int hi = n-1;
   bool flag = false;

   while(lo<=hi){

    int mid = (hi+lo)/2;

    if(arr[mid]==x) {
        if(arr[mid+1]!=x){ // first occurence ke liye ya pe bss mid-1 kar na hoga
            flag =true;
            cout<<mid;
            break;

        }
        else{
            lo = mid +1;  // or yha pe hi = mid-1;
        }
    }
    else if(arr[mid]< x) {
         lo = mid+1;}
    else {
         hi = mid -1;}
   }

   if(flag ==false) {
     cout<<-1;}




    return 0;
}