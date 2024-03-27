#include<bits/stdc++.h>
using namespace std;
using ll = long long;


ll Bin2Dec(string s)
{
    ll res = 0;
    ll mu = 1;
    for(int i = s.length() - 1; i >= 0; i--)
    {
        res += (s[i] - '0') * mu;
        mu *= 2;
    }
    return res;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s1,s2;
        cin >> s1 >> s2;
        cout << Bin2Dec(s1) * Bin2Dec(s2) << endl;
    }
}