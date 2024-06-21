#include <bits/stdc++.h>
using namespace std;
int N = 8, X[100], cot[100], d1[100], d2[100];
int a[100][100];
int ans;
void check()
{
    int res = 0;
    for(int i = 1; i <= N; i++)
    {
        res += a[i][X[i]];
    }
    if(ans < res) ans = res;
}
void Try(int i)
{
    for(int j = 1; j <=  N; j++)
    {
        if(cot[j] && d1[i + j  - 1] && d2[i - j + N])
        {
            X[i] = j;
            cot[j] = d1[i + j - 1] = d2[i - j + N] = 0;
            if(i == N)
            {
                check();
            }
            else Try(i + 1);
            cot[j] = d1[i + j - 1] = d2[i - j + N] = 1;
        }
    }
}



int main()
{
    int t; cin >> t;
    while(t--)
    {
        ans = INT_MIN;
        for(int i = 1; i <= 99; i++) cot[i] = d1[i] = d2[i] = 1;
        for(int i = 1; i <= N; i++)
        {
            for(int j = 1; j <= N; j++)
            {
                cin >> a[i][j];
            }
        }
        Try(1);
        cout << ans << endl;
    }
}