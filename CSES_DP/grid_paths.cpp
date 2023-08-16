#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int xxY = 1e3, mod = 1e9+7;
int n, dp[xxY][xxY];
string s[xxY];

int main() {
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    dp[0][0] =1;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i){
                dp[i][j] += dp[i-1][j];
                dp[i][j] %= mod;
            }
            if(j){
                dp[i][j] +=dp[i][j-1];
                dp[i][j] %= mod;
            }
            if(s[i][j] == '*'){
                dp[i][j]=0;
            }
        }
    }
    cout << dp[n-1][n-1];
    return 0;
}