#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        vector<int> v(6);
        for (int i = 0; i < 6; i++)
        {
            v[i] = a % 10;
            // cout << a % 10 << " ";
            a = a / 10;
        }
        int s1 = 0;
        int s2 = 0;

        for (int i = 0; i < 3; i++)
        {
            s1 += v[i];
        }

        for (int i = 3; i < 6; i++)
        {
            s2 += v[i];
        }

        if (s1 == s2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}