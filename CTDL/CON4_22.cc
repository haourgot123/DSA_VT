#include <bits/stdc++.h>
using namespace std;


int binary_search(int a[], int l, int r, int x)
{
    int index = -1;
    while(l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] == x)
        {
            index = mid + 1;
            return index;
        }
        else if(a[mid] > x) r = mid - 1;
        else l= mid + 1;
    }
    return index;
}


int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int ans = binary_search(a, 0, n - 1, x);
        if(ans == -1) cout << "NO" << endl;
        else cout << ans << endl;
    }
}