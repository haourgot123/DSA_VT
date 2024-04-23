    #include <bits/stdc++.h>
    using namespace std;

    string change(string s)
    {
        for(int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        return s;
    }

    int main()
    {
        int t; cin >> t;
        while(t--)
        {
            string s; cin >> s;
            s = change(s);
            int n = s.size();
            int L[n];
            for(int i = 0; i < n; i++) L[i] = 1;
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < i; j++)
                {
                    if(s[i] > s[j])
                    {
                        L[i] = max(L[i], L[j] + 1);
                    }
                }
            }
            int ans = 0;
            for(int  i = 0; i < n; i++)
            {
                ans = max(ans, L[i]);
            }
            cout << ans << endl;
        }
    }