#include <bits/stdc++.h>
using namespace std;

int N, X[100], cot[100], d1[100], d2[100];
int res = 0;
void Try(int i)
{
    for(int j = 1; j <= N; j++)
    {
        if(cot[j] == 1 && d1[i + j - 1] == 1 && d2[i - j + N] == 1)
        {
            X[i] = j;
            cot[j] = d1[i + j - 1] = d2[i - j + N] = 0;
            if(i == N)
            {
                res++;
            }
            else
            {
                Try(i+1);
            }
            cot[j] = d1[i + j - 1]  = d2[i - j + N] = 1;
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> N;
        for(int i = 1; i < 100; i++)
        {
            cot[i] = d1[i] = d2[i] = 1;
        }
        res = 0;
        Try(1); 
        cout << res << endl;
    }

}