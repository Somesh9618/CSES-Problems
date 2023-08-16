#include <bits/stdc++.h>
#include <iostream>

using namespace std;
#define ll long long
const int INF = 1e9+7;
int main()
{
    ll n;
    cin>>n;
    
    vector<ll>dp(n+1,INF);
    dp[0]=0;
    for(int i=0;i<=n;i++){
       for(auto ch :to_string(i)){
           dp[i] = min(dp[i],dp[i-(ch-'0')]+1);
       } 
    }
    cout << dp[n] << endl;

    return 0;
}
