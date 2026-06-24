#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;
    int a[n];
    cout << "Enter element : ";
    for (auto &x : a)
    {
        cin >> x;
    }
    for (auto &x : a)
    {
        cout<< x;
    }
    return 0;
}

