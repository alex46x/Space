#include <bits/stdc++.h>
#include <iostream>
using namespace std;

long long v(vector<int> &a)
{
    long long sum = 0;
    int mx = 0;
    for (int x : a)
    {
        mx = max(mx, x);
        sum += mx;
    }
    return sum;
}

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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long ans = v(a);
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(a[i], a[j]);
                ans = max(ans, v(a));
                swap(a[i], a[j]);
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
