#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> v;
        v.push_back(0);
        for (int i = 0; i < n; i++)
        {
            long long point;
            cin >> point;
            v.push_back(point);
        }
        v.push_back(x);
        n = v.size();

        long long mx = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
                mx = max(mx, 2 * (v[i] - v[i - 1]));

            else
                mx = max(mx, v[i] - v[i - 1]);
        }
        cout << mx << endl;
    }
    return 0;
}
