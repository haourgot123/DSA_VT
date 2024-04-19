#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        stack <char> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ']')
            {
                string tmp = "";
                while(st.top() != '[')
                {
                    tmp = st.top() + tmp;
                    st.pop();
                }       
                st.pop();
                string k = "";
                while(st.size() &&  st.top() >= '0' && st.top() <= '9')
                {
                    k = st.top() + k;
                    st.pop();
                }
                int n = stoi(k);
                string ans = "";
                for(int j = 0; j < n; j++) ans += tmp;
                for(auto c : ans) st.push(c);
            }
            else st.push(s[i]);
        }
        string res = "";
        while(st.size())
        {
            res = st.top() + res;
            st.pop();
        }
        cout << res  << endl;
    }
}