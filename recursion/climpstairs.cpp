#include<iostream>
using namespace std;

int findways(int n){
    if(n<0) return 0;
    if(n==1) return 1;
    return findways(n-1)+ findways(n-2)+ findways(n-3);
}



int main(){

    int n;
    cin>>n;

    cout<<findways(n)<<endl;
    return 0;
}