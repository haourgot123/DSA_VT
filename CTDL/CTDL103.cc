#include<bits/stdc++.h>
using namespace std;

int n, a[1005][1005];

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        a[i][x] = 1;
        a[i][y] = 1;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}