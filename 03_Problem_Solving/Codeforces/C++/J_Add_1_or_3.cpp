#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> b >> a;
        if (a >= b && a <= 3 * b && ((a - b) % 2 == 0))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}