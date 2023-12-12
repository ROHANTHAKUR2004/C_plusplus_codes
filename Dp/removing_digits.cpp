#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;


    vector<int> digits(int n){
    vector<int> result;
    while(n>0){
        if(n%10!=0){
           result.push_back(n%10);
        } 
         n = n/10;
    }
   
    return result;
}

 vector<int>dp;

int f(int n){
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n]!= -1) return dp[n];
    vector<int> d = digits(n);
     int result = INT16_MAX;
    for(int i=0;i<d.size();i++){
        result = min(result, f(n- d[i]));
    }
    return dp[n] = 1+ result;
}

int main(){
    int n ;
    cin>>n;
    dp.resize(100005,-1);
    cout<<f(n);
}