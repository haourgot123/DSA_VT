#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n; cin >> n;
    vector <vector<int>> v;
    v.resize(n);
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        v[0].push_back(x);
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < v[i-1].size() - 1; j++)
        {
            v[i].push_back(v[i-1][j] + v[i-1][j+1]);
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << "[";
        for(int j = 0; j < v[i].size(); j++)
        {
            if(j != v[i].size() - 1) cout << v[i][j] << " ";
            else cout << v[i][j];
        }
        cout << "]";
        cout << endl;
    }
}


int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}