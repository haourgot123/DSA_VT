#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t; cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            int k = a[i];
            int j = i - 1;
            while (j >= 0 && a[j] > k)
            {
                a[j + 1] = a[j];
                j = j - 1;
            }
            a[j + 1] = k;
            cout << "Buoc " << i << ": ";
            for (j = 0; j <= i; j++)
                cout << a[j] << " ";
            cout << endl;
        }
	}
}

