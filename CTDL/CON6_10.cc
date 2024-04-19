#include <bits/stdc++.h>
using namespace std;



int main()
{
    
        int t; cin >> t;
        while(t--)
        {
            int n; cin >> n;
            string a[n];
            set <char> s;
            for(int i = 0; i < n; i++)
            {
                cin >> a[i];
            }
            for(int  i = 0; i < n; i++)
            {
                for(int j = 0; j < a[i].size(); j++)
                {
                    s.insert(a[i][j]);
                }
            }
            for(auto it : s)
            {
                cout << it << " ";
            }
            cout << endl;
            
        }
    
}