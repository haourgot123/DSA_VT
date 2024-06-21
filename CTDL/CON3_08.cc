#include <bits/stdc++.h>
using namespace std;

int cmp(pair<int,int>a,pair<int,int>b){
  return a.second<b.second;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n; cin >> n;
        long long a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        pair <long long, long long> p[n];
        for(int i = 0; i < n; i++) 
        {
            p[i].first = a[i];
            p[i].second = b[i];
        }
        sort(p, p + n, cmp);
        long long res = 1;
        long long k = p[0].second;
        for(int i = 1; i < n; i++)
        {
            if(p[i].first >= k)
            {
                res++;
                k = p[i].second;
            }

        }
        cout << res << endl;
    }
}