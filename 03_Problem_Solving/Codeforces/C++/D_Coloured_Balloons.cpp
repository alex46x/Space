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
        // vector<int> v(n);
        // for (auto &x : v)
        // {
        //     cin >> x;
        // }
        long long c = 0;
        for (int i = 1; i <= n; i++)
        {
            int A;
            cin >> A;
            c += (long long)A * i;
        }

        cout << c << "\n";
    }

    return 0;
}