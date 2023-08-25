#include<iostream>
using namespace std;
  void printSum(int sum,int n){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    printSum(sum+n,n-1);
  }
int main(){
    int n;
    cout<<" n is : ";
    cin>>n;

    printSum(0,n);
}