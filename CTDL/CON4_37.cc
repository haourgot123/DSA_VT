#include <bits/stdc++.h>
using namespace std;


int main(int argc, char **argv)
{
    int t; cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int res = -1;
        for(int i = 0; i < n; i++)
        {
            if(a[i] > x) break;
            else
            {
                res = i + 1;
            }
        }
        cout << res << endl;
    }
}