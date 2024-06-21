#include <bits/stdc++.h>
using namespace std;



int main(int argc, char** argv)
{
    int t; cin >> t;
    while(t--)
    {
        int k;
        string a, b;
        cin >> k >> a >> b;
        while(a.size() < b.size()) a = "0" + a;
        while(a.size() > b.size()) b = "0" + b;
        int nho = 0;
        string s = "";
        for(int i = a.size() - 1; i >= 0; i--)
        {
            int q = (a[i] - '0') + (b[i] - '0') + nho;
            s += to_string(q % k);
            nho = q / k;
        }
        if(nho) s += to_string(nho);
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
}