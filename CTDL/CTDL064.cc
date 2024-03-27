#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long dp[1005][1005];

int main()
{
    for(int i = 0; i <= 1000; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(i == j || j == 0)
            {
                dp[i][j] = 1;
            }
            else 
            {
                dp[i][j] = dp[i-1][j - 1] + dp[i-1][j];
            }
            dp[i][j] %= MOD;
        }
    }

    int t; cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        cout << dp[n][k] << endl;
    }
}