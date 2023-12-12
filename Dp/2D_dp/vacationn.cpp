#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
   int n ;
   cin>>n;

   vector<vector<int> > dp(n, vector<int> (3, 0));

    // base case 
    int a,b,c; 
    cin>>a>>b>>c;
    dp[0][0] = a;
    dp[0][1] = b;
    dp[0][2] = c;


    for(int i=1;i<n;i++){
        //input the happines for i_th day
        cin>>a>>b>>c;
        // i th -> a;
        dp[i][0] = a + max(dp[i-1][1], dp[i-1][2]);
         // i th -> b;
        dp[i][1] = b + max(dp[i-1][0], dp[i-1][2]);
         // i th -> c;
        dp[i][2] = c + max(dp[i-1][0], dp[i-1][1]);
    }
    cout<< max({dp[n-1][0], dp[n-1][1], dp[n-1][2]});


    return 0;
}