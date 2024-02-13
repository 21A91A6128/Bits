#include <bits/stdc++.h>
using namespace std;

void bfs(int V, vector<int> adj[]) {
    queue<int>q;
    vector<int>vis(V+1,0);
    vector<int>res;
    vis[0]=1;
    q.push(0);
    cout<<0<<' ';
    while(!q.empty()){
        int el=q.front();
        for (auto i:adj[el]){
            if(vis[i]==0){
                cout<<i<<' ';
                q.push(i);
                vis[i]=1;
            }
        }
        q.pop();
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
    cout<<"BFS for given graph:";
    bfs(5,adj);
}
