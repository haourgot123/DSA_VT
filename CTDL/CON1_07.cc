#include <bits/stdc++.h>
using namespace std;
int n, a[11];

void out(int n)
{
    cout << "(";
    for(int i = 1; i < n; i++) cout << a[i] << " ";
    cout << a[n] << ") ";
}

void Try(int i, int k, int cursum)
{
    for(int j = k; j >= 1; j--)
    {
        if(cursum + j <= n)
        {
            a[i] = j;
            if(cursum + j  == n) out(i);
            else Try(i + 1, j, cursum + j);
        }
    }
}


int main(int argc, char** argv)
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        Try(1, n, 0);
        cout << endl;
    }
}