#include<iostream>
#include<vector>
using namespace std;

vector<int>coins;
vector<int>dp;

int f(int x){
    if(x==0) return 0;
    if(dp[x]!= -2) return dp[x];
    int result = INT16_MAX;
    for(int i =0;i<coins.size();i++){
        if(x-coins[i]< 0) continue;
        result = min(result, f(x-coins[i]));
    }
    if(result == INT16_MAX) return dp[x] = INT16_MAX;
    return dp[x] = 1 + result;
}

int main(){

   int n,x;
   cin>>n>>x;

   for(int i=0;i<n;i++){
    int num;
    cin>>num;
    coins.push_back(num);
   }
    dp.resize(1000006,-2);
  
   int ans = f(x);
   if(ans == INT16_MAX) cout<<"-1";
   else cout<<ans<<" ";

    return 0;
}