#include <bits/stdc++.h>
using namespace std;

int n,k;
void solve()
{
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int mid = (r + l) / 2;
        if(a[mid] == k)
        {
            cout << mid + 1 << endl;
            return;
        }
        else if(a[mid] > k)
        {
            r = mid - 1;
        }
        else if(a[mid] < k)
        {
            l = mid + 1;
        }
    }
    cout << "NO" << endl;
}


int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}