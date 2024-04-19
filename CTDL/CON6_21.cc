#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.second > b.second)
        return 1;
    if(a.second == b.second && a.first < b.first)
        return 1;
    return 0;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        map <int,int>mp;
        vector <pair<int,int> > v;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for(int i = 0; i < n; i++)
        {
            v.push_back(make_pair(a[i], mp[a[i]]));
        }
        sort(v.begin(), v.end(), cmp);
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i].first << " ";
        }
        cout << endl;
    }
}