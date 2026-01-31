#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int totial = 0;
    int sam = 0;
    int ans = 0;
    for (auto &x : v)
    {
        cin >> x;
        totial += x;
    }

    // short(v.begin(), v.end() greater<int>());
    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < n; i++)
    {
        sam += v[i];
        ans++;
        if (sam > totial - sam)
            break;
    }

    cout << ans << "\n";

    return 0;
}