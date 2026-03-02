#include <bits/stdc++.h>
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

        vector<int> v(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v[a]++;
        }

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans += v[i] / 2;
        }

        cout << ans << "\n";
    }
    return 0;
}