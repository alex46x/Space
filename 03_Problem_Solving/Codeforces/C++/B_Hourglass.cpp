#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long s, k, m;
        cin >> s >> k >> m;

        long long q = m / k;
        long long r = m % k;

        long long base;
        if (q % 2 == 0)
        {
            base = s;
        }
        else
        {
            base = min(k, s);
        }

        long long ans = base - r;
        if (ans < 0)
            ans = 0;

        cout << ans << "\n";
    }
    return 0;
}
