#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k; cin >> k;
    string s; cin >> s;
    int n = s.length();
    for(int i = 0; i < n - 1 && k > 0; i++)
    {
        int maxindex = i;
        for(int j = i + 1; j < n; j++)
        {
            if((s[maxindex]) < (s[j]))
            maxindex = j;
        }
        if(maxindex != i)
        {
            swap(s[i], s[maxindex]);
            k--;
        }
    }
    cout << s << endl;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}