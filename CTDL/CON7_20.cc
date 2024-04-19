#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        vector<int> v;
        for(int i = 0; i < n; i++)
        {
            int check = 1;
            for(int j = i + 1; j < n; j++)
            {
                if(a[j] > a[i])
                {
                    v.push_back(a[j]);
                    check = 0;
                    break;
                }
            }
            if(check) v.push_back(-1);
        }
        for(int i = 0; i < n; i++) cout << v[i] << " ";
        cout << endl;
    }
}