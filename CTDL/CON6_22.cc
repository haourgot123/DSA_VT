#include <bits/stdc++.h>
using namespace std;

int find(int a[], int n,int x)
{
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int mid = l + (r-l)/2;
        if(a[mid] == x) return 1;
        else if(a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}




int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int &x : a) cin >> x;
        cout << find(a, n, x) << endl;
    }
}