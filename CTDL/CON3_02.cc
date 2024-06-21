#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    string a, b; cin >> a >> b;
    ll max_res = 0;
    ll min_res = 0;
    string a1 = a;
    string b1 = b;
    for(int i = 0; i < a1.size(); i++)
    {
        if(a1[i] == '5') a1[i] = '6';
    }
    for(int i = 0; i < b1.size(); i++)
    {
        if(b1[i] == '5') b1[i] = '6';
    }
    max_res = stoll(a1) + stoll(b1);
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == '6') a[i] = '5';
    }
    for(int i= 0; i < b.size(); i++)
    {
        if(b[i] == '6') b[i] = '5';
    }
    min_res = stoll(a) + stoll(b);
    cout << min_res << " " << max_res << endl;
}

int main()
{
    solve();
}