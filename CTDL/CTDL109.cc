#include <bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector<int> adj[10001];
bool visited[10001];
int parents[10001];

void dfs(int u)
{
    visited[u]  = true;
    for(int v: adj[u])
    {
        if(!visited[v])
        {
            parents[v] = u;
            dfs(v);
        }
    }
}

void Path(int s, int t)
{
    memset(visited, false, sizeof(visited));
    memset(parents, 0, sizeof(parents));
    dfs(s);
    if(!visited[t])
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        vector <int> path;
        while(t != s)
        {
            path.push_back(t);
            t = parents[t];
        }
        path.push_back(s);
        reverse(path.begin(), path.end());
        for(int x : path)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}


int main()
{
    int k; cin >> k;
    while(k--)
    {
        cin >> n >> m  >> s >> t;
        memset(adj, 0 , sizeof(adj));
        for(int j = 0; j < m; j++)
        {
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
        }
        Path(s, t);
    }
}