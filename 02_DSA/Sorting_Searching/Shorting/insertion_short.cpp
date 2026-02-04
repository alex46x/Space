#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v = {12, 34, 23, 3456, 134, 6, 23, 12, 21, 1, 2, 454, 4, 65};
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int key = v[i];
        while (j >= 0 and v[j] > key)
        {
            swap(v[j], v[j + 1]);
            j--;
        }
        v[j + 1] = key;
    }

    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}