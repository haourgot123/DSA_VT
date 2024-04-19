#include<bits/stdc++.h>
using namespace std;

long long b_pow(int  n,long long p)
{
    if(p == 0) return 1;
    if(p == 1) return 2;
    long long x = b_pow(2, p/ 2);
    if(p%2) return 2 * x * x;
    else return x * x;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        long long x = b_pow(2, n)/2;
        while(1)
        {
            if(n == 1)
            {
                cout << 1;
                break;
            }
            if(x == k)
            {
                cout << n;
                break;
            }
            if(k > x)
            {
                k = x - (k - x);
            }
            n--;
            x/=2;
        }
        cout << endl;

    }
}