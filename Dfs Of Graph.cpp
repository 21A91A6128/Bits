#include <bits/stdc++.h>
using namespace std;
void dfs(int V,vector<int> adj[],vector<int>&vis){
    vis[V]=1;
    cout<<V<<' ';
    for (auto i:adj[V]){
        if(vis[i]==0)dfs(i,adj,vis);
    }
}
int main() {
	int V, E;
    cin >> V >> E;
    vector<int> adj[V];
    vector<int>vis(V+1,0);
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<"DFS for given graph:";
    dfs(0,adj,vis);
}
