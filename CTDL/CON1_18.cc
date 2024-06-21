#include <bits/stdc++.h>
using namespace std;
int n, s, a[100], c[100], ok;




int main(int argc, char **argv)
{
    int t; cin >> t;
    while(t--)
    {
        int n, s; cin >> n >> s;
        int dem = 0;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        for(int i = n - 1; i >= 0; i--)
        {
            while(s >= a[i])
            {
                s -= a[i];
                dem ++;
            }   
        }
        if(s) cout << -1 << endl;
        else cout << dem << endl;
    }
}