// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// #define ll long long
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<ll> v(n);
//         for (auto &x : v)
//         {
//             cin >> x;
//         }

//         ll ma = *min_element(v.begin(), v.end());
//         ll g = 0;
//         for (int i = 0; i < n; i++)
//         {
//             g = gcd(g, v[i] - ma);
//         }

//         cout << g << "\n";
//     }

//     return 0;
// }

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

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long g = 0;
        for (int i = 1; i < n; i++)
        {
            g = gcd(g, llabs(a[i] - a[0]));
        }

        if (g == 0)
            cout << *min_element(a.begin(), a.end()) << "\n";
        else
            cout << g << "\n";
    }

    return 0;
}
