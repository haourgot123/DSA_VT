#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int res = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            int tmp = a[i]; 
            for(int j = i + 1; j < n; j++)
            {
                tmp += a[j];
                res = max(res, tmp);
            }
        }
        cout << res << endl;
    }
}