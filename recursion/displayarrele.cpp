#include<iostream>
using namespace std;
void display(int arr[],int n,int idx){
    if(idx==n) return ;
    //display(arr,n,idx+1); /// agar esko chalynge toh reverse order main print hojayenge ..
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);

}
int main(){
    int arr[]= {1,3,2,4,6,46,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);
}