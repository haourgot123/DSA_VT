#include<bits/stdc++.h>
using namespace std;
using ll  = long long;

vector <ll> v;

void Poscenter(ll n)
{
    int t = 0;
    ll mu = 1;
    while(n/2 > 0)
    {
        t++;
        if(t==1)
        {
            mu = 2;
            v.push_back(mu);
        }
        else 
        {
            mu *= 2;
            v.push_back(mu);
        }
        n /= 2;
    }
}

ll val(ll k, ll n, ll pos)
{
    if(k%2==1) return 1;
    if(k < v[pos]) val(k, n/2, pos - 1);
    else if(k == v[pos]) return n%2;
    else if(k > v[pos]) val(2*v[pos] - k, n/2, pos - 1);
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n, l, r;
        cin >> n >> l >> r;
        v.clear();
        Poscenter(n);
        ll res = 0;
        for(int i = l; i <= r; i++)
        {
            res += val(i,n,v.size() - 1);
        }
        cout << res << endl;
    }
}