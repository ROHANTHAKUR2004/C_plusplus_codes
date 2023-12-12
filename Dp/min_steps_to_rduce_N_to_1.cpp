#include<iostream>
#include<algorithm>
#include<vector>
#define inf INT16_MAX
using namespace std;

vector<int> dp;

int f(int n){
    if(n == 1) return 0;
    if(n == 2 || n == 3) return 1;
    if(dp[n]!= -1) return dp[n];
    return dp[n] = 1 + min ({f(n-1),(n%2 == 0) ? f(n/2) : inf, (n%3 == 0) ? f(n/3) : inf});
}
int main(){
    dp.clear();
    dp.resize(1005,-1);
    int n;
    cin>>n;
   cout<<f(n);
}