#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;

    for (int x = 1; x <= 10; x++)
    {
        int cost = k * x;
        if (cost % 10 == 0 || cost % 10 == r)
        {
            cout << x << "\n";
            break;
        }
    }
    return 0;
}
