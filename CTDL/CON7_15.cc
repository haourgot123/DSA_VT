#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin >> t;
    while(t--) 
    {
        string s; cin >> s;
        stack<string> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] =='/')
            {
                string f1 = st.top(); st.pop();
                string f2 = st.top(); st.pop();
                string tmp = '(' + f2 + s[i] + f1 + ')';
                st.push(tmp);
            }
            else st.push(string(1, s[i]));
        }
        cout << st.top() << endl;
    }
}