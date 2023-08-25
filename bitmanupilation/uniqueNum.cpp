#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,2,2,1,5,3,4,5,4};
    int n = 9;
    int res = 0;
    for(int i=0;i<n;i++){
        res = res^arr[i];
    }
    cout<<res<<endl;
}