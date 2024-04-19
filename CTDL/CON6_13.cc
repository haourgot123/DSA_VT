#include <bits/stdc++.h>
using namespace std;




int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int x; cin >> x;
        map <int, int> mp;
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            mp[x]++;
        }
        if(mp[x] == 0) cout << "-1" << endl;
        else cout << mp[x] << endl;

    }
}