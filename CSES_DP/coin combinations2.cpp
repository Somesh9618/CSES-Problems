#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    int mod = 1e9+7;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<int>>dp(n+1,vector<int>(x+1,0));
    dp[0][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=x;j++){
            dp[i][j] = dp[i-1][j];
            int left = j-a[i-1];
            if(left>=0){
                dp[i][j] += dp[i][left];
                dp[i][j] %= mod;
            }
            
            
        }
    }
    cout << dp[n][x]<<endl;
    
    return 0;
}
