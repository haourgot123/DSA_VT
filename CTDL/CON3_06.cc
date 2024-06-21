#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >>  t;
    while(t--)
    {
        int n; cin >> n;
        string ans = "Yes";
        int a[n]; 
        int b[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        int l = 0, r = n - 1;
        while(l <= r) 
        {
            if((a[l] == b[l] && a[r] == b[r]) || (a[l] == b[r] && a[r] == b[l]))
            {
                l++; r--;
            }
            else
            {
                ans = "No";
                break;
            }
        }
        cout << ans << endl;
        
    }
}