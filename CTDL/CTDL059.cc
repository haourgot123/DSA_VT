#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
    int t; cin >> t;
    while(t--)
    {
       map <int, int> mp;
       int n; cin >> n;
       ll a[n], b[n-1];
       for(int i = 0; i < n; i++)
       {
            cin >> a[i];
            mp[a[i]]++;
       }
       for(int i = 0; i < n - 1; i++)
       {
            cin >> b[i];
            mp[b[i]]++;
       }
       for(int i = 0; i < n; i++)
       {
            if(mp[a[i]] == 1)
            {
                cout << i + 1 << endl;
                break;
            }
       }
    }
}