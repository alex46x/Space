#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x = ((a + b) / 2);
        int y = ((b - a) / 2);
        cout << x << " " << y << "\n";
    }

    return 0;
}