#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if (a % 3 == 0)
        {
            cout << "Second\n";
        }
        else
        {
            cout << "First\n";
        }
    }

    return 0;
}