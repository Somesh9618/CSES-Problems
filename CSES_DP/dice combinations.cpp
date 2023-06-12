#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int mod = 1e9+7;
   vector<int>dp(n+1,0);
   dp[0]=1;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=6;j++){
           if(i-j >= 0){
               dp[i] = (dp[i]+dp[i-j])%mod;
           }
       }
   }
   cout << dp[n];

    return 0;
}


//pattern similar to LC no of dice rolls with target sum.