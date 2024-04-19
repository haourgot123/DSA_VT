#include <bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector<int> adj[10001];
bool visited[10001];
int parent[10001];

void bfs(int u)
{
    queue <int> q;
    q.push(u);
    visited[u] = true;
    while(q.size() ! = 0)
    {
        int v = q.front();
        q.pop();
        for(int x : adj[v])
        {
            if(!visited[x])
            {
                q.push(x);
                visited[x] = true;
                parent[x] = v;
            }
        }
    }
}

void Path(int s, int t)
{
    memset(visited, false, sizeof(visited));
    memset(parents, 0, sizeof(parents));
    bfs(s);
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
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> m >> s >> t;
        for(int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        Path(s, t);
    }

}