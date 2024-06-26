#include <bits/stdc++.h>
using namespace std;

int degree(char x)
{
    if(x == '^') return 5;
    else if(x == '*' || x == '/') return 4;
    else if(x == '+' || x == '-') return 3;
    return 2;
}

void solve()
{
    string s; cin >> s;
    stack <char> st;
    string res = "";
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z') res += s[i];
        else if(s[i] >= 'a' && s[i] <= 'z') res += s[i];
        else if(s[i] == '(') st.push(s[i]);
        else if(s[i] == ')')
        {
            while(st.size() > 0 && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(st.size() && degree(st.top()) >= degree(s[i]))
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(st.size())
    {
        if(st.top() != '(') res += st.top();
        st.pop();
    }
    cout  << res << endl;
}


int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}