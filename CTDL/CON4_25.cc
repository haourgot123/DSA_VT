#include<bits/stdc++.h>
using namespace std;


string fibonaci(int n)
{
    if(n==1) return "A";
    if(n == 2) return "B";
    string f1 = "A";
    string f2 = "B";
    string fn = "";
    for(int i = 3; i <=n; i++)
    {
        fn = f1 + f2;
        f1 =  f2;
        f2 = fn;
    }
    return fn;
}



int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        string ans = fibonaci(n);
        cout << ans<< endl;
    }
}