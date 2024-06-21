#include <bits/stdc++.h>
using namespace std;

int n, c[105][105], visited[105];
int X[105];
int d = 0, ans = INT_MAX;
int cmin = INT_MAX;
void nhap()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> c[i][j];
            if(i != j) cmin = min(cmin, c[i][j]);
        }
    }
    memset(visited, 0, sizeof(visited));
    X[1] = 1;
    visited[1] = 1;
}

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(visited[j] == 0)
        {
            visited[j] = 1;
            X[i] = j;
            d += c[X[i - 1]][X[i]];
            if(i == n)
            {
                ans = min(ans, d + c[X[n]][1]);
            }
            else if(d + cmin*(n - i + 1) < ans) Try(i+1);
            //backtrack
            visited[j] = 0;
            d -= c[X[i - 1]][X[i]];

        }
    }
}

int main(int argc, char** argv)
{
    nhap();
    Try(2);
    cout << ans << endl;
}