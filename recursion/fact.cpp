#include<iostream>
using namespace std;
long long fact(long long n){
        //base case 
        if(n==1 || n==0)   return 1;
        // recursive call
        return n*fact(n-1);
    }
int main(){

      long long x;
      cin>>x;
    
    cout<<fact(x);
}