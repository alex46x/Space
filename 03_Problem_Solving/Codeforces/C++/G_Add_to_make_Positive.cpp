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

        long long s = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s += x;
        }

        if (s >= 0)
            cout << 0 << "\n";
        else
            cout << (-s + n - 1) / n << "\n";
    }
    return 0;
}
