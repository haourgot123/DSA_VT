#include <bits/stdc++.h>
using namespace std;
int X[100];
int n, k, s;
int ans;
void Try(int i)
{
    for(int j = 1 + X[i - 1]; j <= n - k + i; j++)
    {
        X[i] = j;
        if(i == k)
        {
            int res = 0;
            for(int m = 1; m <= k; m++)
            {
                res += X[m];
            }
            if(res == s) ans++;
        }
        else Try(i+1);
    }
}

int main(int argc, char** argv)
{
    while(1)
    {
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0) break;
        X[0] = 0;
        ans = 0;
        Try(1);
        cout << ans << endl;
    }
}