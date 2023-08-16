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
    vector<int>dp(x+1,0);
    dp[0]=1;
    for(int i=1;i<=x;i++){
        for(int j=0;j<n;j++){
            if(i>=a[j]){
                dp[i] += dp[i-a[j]];
                dp[i]%=mod;
            }
        }
    }
    cout << dp[x]<<endl;
    
    return 0;
}
