#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 

int n,m;
vector<int>adj[100001];
int indeg[100001];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        indeg[v]++;
    }
    queue<int>q;
    vector<int>ans;
    for(int i=1;i<=n;i++){
        if(indeg[i] == 0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(auto it:adj[node]){
            indeg[it]--;
            if(indeg[it]==0){
                q.push(it);
            }
        }
    }
    if(ans.size()<n){
        cout <<"IMPOSSIBLE";
    }
    else{
        for(int it:ans){
            cout << it <<" ";
        }
    }
    
 
    return 0;
}