#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        stack<string> st;
        for(int i = s.size()-1; i >= 0; i--)
        {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^')
            {
                string fi = st.top(); st.pop();
                string se = st.top(); st.pop();
                string ans = '('+fi + s[i] + se + ')';
                st.push(ans);
            }
            else st.push(string(1, s[i]));
        }
        cout << st.top() << endl;
    }
}