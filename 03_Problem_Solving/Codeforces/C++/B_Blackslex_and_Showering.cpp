#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (auto &x : a)
        {
            cin >> x;
        }

        ll total = 0;
        for (int i = 0; i + 1 < n; i++)
        {
            total += llabs(a[i] - a[i + 1]);
        }

        ll ml = 0;

        ml = max(ml, llabs(a[0] - a[1]));

        ml = max(ml, llabs(a[n - 2] - a[n - 1]));

        for (int i = 1; i + 1 < n; i++)
        {
            ll loss =
                llabs(a[i - 1] - a[i]) +
                llabs(a[i] - a[i + 1]) -
                llabs(a[i - 1] - a[i + 1]);

            ml = max(ml, loss);
        }

        cout << total - ml << "\n";
    }

    return 0;
}
