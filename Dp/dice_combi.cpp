#include<iostream>
#include<vector>
using namespace std;


  vector<int>dp;
int f(int n){
    if(n==0) return 1;
    if(dp[n]!= -1) return dp[n];
    int sum = 0;
    for(int i=1;i<=6;i++){
        if(n-i < 0) break;
        sum += f(n-i);
    }
    return dp[n] = sum;
}
int main(){
   
    dp.resize(10005,-1);
    int n;
    cin>>n;
    cout<<f(n);

    return 0;
}