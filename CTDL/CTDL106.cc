#include <bits/stdc++.h>
using namespace std;

int n, m, u;
vector<int> adj[10001];
bool visited[10001];
void inp()
{
    cin >> n >> m >> u;
    for(int i = 0; i < m; i++)
    {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
    }
    memset(visited, 0, sizeof(visited));
}

void dfs(int u)
{
    cout << u << " ";
    visited[u] = true;
    for(int v : adj[u])
    {
        if(!visited[v])
            dfs(v);
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        inp();
        dfs(u);
        cout << "\n";
        
    }
}