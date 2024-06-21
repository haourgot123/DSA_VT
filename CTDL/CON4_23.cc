#include <bits/stdc++.h>
using namespace std;
using ll = long long;


ll binary_pow(int a, int n)
{
    if(n == 0) return 1;
    if(n == 1) return 2;
    ll x = binary_pow(a, n / 2);
    if(n % 2) return x * x * a;
    else return x * x;
}


int main(int argc, char** argv)
{
    int  t; cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        ll x = binary_pow(2, n) / 2;
        while(1)
        {
            if(n == 1)
            {
                cout << 1 << endl;
                break;
            }
            if(x == k)
            {
                cout << n << endl;
                break;
            }
            if(k > x)
            {
                k = x - (k - x);
            }
            n--;
            x/=2;
        }
    }
}