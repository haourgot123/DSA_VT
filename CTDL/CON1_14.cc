#include <bits/stdc++.h>
using namespace std;



int main(int argc, char** argv)
{
    int t; cin >> t;
    while(t--)
    {
        int n, k, ans = 0;
        cin >> n >> k;
        int a[k + 1];
        int d[100] ={0};
        for(int i = 1; i <= k; i++)
        {
            cin >> a[i];
            d[a[i]] = 1;
        }
        int i = k;
        while(i >= 1 && a[i] == n - k + i)
        {
            i--;
        }
        if(i == 0)
        {
            cout << k << endl;
        }
        else
        {
            a[i]++;
            for(int j = i + 1; j <= k; j++) a[j] = a[j - 1] + 1;
            for(int j = 1; j <= k; j++)
            {
                d[a[j]] = 0;
            }
            for(int j = 1; j <= 40  ; j++)
            {
                if(d[j]) ans++;
            }
            cout << ans << endl;
        }
    }
}