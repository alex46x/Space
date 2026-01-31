#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        if (k > n)
        {
            cout << -1 << "\n";
            continue;
        }

        long long low = n, high = n;
        bool found = false;

        for (int time = 0; time <= 60; time++)
        {
            if (low <= k && k <= high)
            {
                cout << time << "\n";
                found = true;
                break;
            }

            long long NL = low / 2;
            long long nH = (high + 1) / 2;

            if (NL == low && nH == high)
                break;

            low = NL;
            high = nH;
        }

        if (!found)
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}