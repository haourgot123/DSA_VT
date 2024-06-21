#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n]; 
        vector<vector<int>> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            v[0].push_back(a[i]);
        }
        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < v[i -1].size() - 1; j++)
            {
                v[i].push_back(v[i - 1][j] + v[i - 1][j + 1]);
            }
        }
        for(int i = 0; i < n; i++)
        {
            cout << '[';
            int j;
            for(j = 0; j < v[i].size() - 1; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << v[i][j] << ']' << endl;
        }
    }
}