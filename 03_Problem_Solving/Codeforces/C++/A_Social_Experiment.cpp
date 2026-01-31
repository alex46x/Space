#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        //     long long n;
        //     cin >> n;
        //     cout << (n % 3 != 0) << "\n";
        // }

        long long n;
        cin >> n;
        long long tm = n / 2;
        long long e = n % 2;
        long long dt = (tm % 2) * 2;

        cout << llabs(dt - e) << "\n";
    }

    return 0;
}