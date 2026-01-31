#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, s;
        cin >> n >> s >> x; // ✅ FIXED ORDER

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
        }

        if (s >= sum && (s - sum) % x == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
