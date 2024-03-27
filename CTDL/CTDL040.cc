#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n;cin >> n;
        vector <int> v;
        vector <int> ans;
        for(int i = 0; i < n; i++)
        {
            int x ; cin >> x;
            v.push_back(x);
        }
        if(n&1) v.push_back(0);
        sort(v.begin(), v.end());
        int nho = 0;
        for(int i = v.size() - 1; i >= 1; i--)
        {
            int sum = v[i] + v[i - 1] + nho;
            ans.push_back(sum % 10);
            nho = sum / 10;
            i--;
        }
        if(nho) ans.push_back(nho);
        int index = - 1;
        for(int i = ans.size() - 1; i >= 0; i--)
        {
            if(ans[i] != 0)
            {
                index = i;
                break;
            }
        }
        if(index == -1) cout << 0;
        else
        {
            for(int i = index; i >= 0; i--)
            {
                cout << ans[i];
            }
        }
        cout << endl;
    }
}