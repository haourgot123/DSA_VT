#include <bits/stdc++.h>
using namespace std;
int n, ok;
char a[100];
void init()
{
    for(int i = 1; i <= n; i++) a[i] = 'A';
}

void sinh()
{
    int i = n; 
    while(i >= 1 && a[i] == 'B')
    {
        a[i] = 'A';
        i--;
    }
    if(i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i] = 'B';
    }
}

int main(int argc, char** argv)
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        ok = 1;
        init();
        while(ok)
        {
            for(int i = 1; i <= n; i++)
            {
                cout << a[i];
            }
            cout << " ";
            sinh();
        }
        cout << endl;
    }
}