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
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        int ans = 1, cur = 1;

        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
                continue;
            if (a[i] == a[i - 1] + 1)
                cur++;
            else
                cur = 1;
            ans = max(ans, cur);
        }

        cout << ans << "\n";
    }
    return 0;
}
