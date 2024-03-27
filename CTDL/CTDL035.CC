#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll l,r;
    cin >> l >> r;
    int k = 1;
    int res;
    if(l == r)
    {
        while(k <= 40)
        {
            double l1 = pow(l,1.0/k);
            double r1 = pow(r,1.0/k);
            if(int(r1) - r1 == 0) res = k;
            k++;
        }
    }
    else
    {
        while(k <= 40)
        {
            ll l1 = ceil(pow(l,1.0/k));
            ll r1 = floor(pow(r,1.0/k));
            if(l1 <= r1) res = k;
            else break;
            k++;
        }
    }  
    cout << res << endl;
}


int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}