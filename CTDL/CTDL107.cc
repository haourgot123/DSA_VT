#include <bits/stdc++.h>
using namespace std;

int n, m, u;
vector<int> adj[10001];
bool visited[10001];

void inp()
{
    cin >> n >> m >> u;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(visited, false, sizeof(visited));
}

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(q.size() != 0)
    {
        int v = q.front();
        q.pop();
        cout << v << " ";
        for(int x : adj[v])
        {
            if(!visited[x])
            {
               q.push(x);
               visited[x] = true;
            }
        }

    }
}

int main(int argc, char *argv[])
{
    int t; cin >> t;
    while(t--)
    {
        inp();
        bfs(u);
        cout << "\n";
    }
}   