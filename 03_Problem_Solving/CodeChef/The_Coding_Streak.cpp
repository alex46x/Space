#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &x : v)
        {
            cin >> x;
        }
        int cur = 0, ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                cur++;
                ans = max(ans, cur);
            }
            else
            {
                cur = 0;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}