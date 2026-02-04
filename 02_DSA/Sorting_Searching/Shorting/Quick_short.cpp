#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int partition(vector<int> &v, int st, int end)
{
    int indx = st - 1, pivot = v[end];

    for (int i = st; i < end; i++)
    {
        if (v[i] <= pivot)
        {
            indx++;
            swap(v[i], v[indx]);
        }
    }

    indx++;
    swap(v[end], v[indx]);
    return indx;
}

void quick_short(vector<int> &v, int st, int end)
{
    if (st < end)
    {
        int pv = partition(v, st, end);
        quick_short(v, st, pv - 1);
        quick_short(v, pv + 1, end);
    }
}
int main()
{
    vector<int> v = {12, 43, 2, 45, 23, 675, 1, 3, 54, 22, 8, 5};
    int n = v.size();
    // cout << n;
    quick_short(v, 0, n - 1);
    for (auto x : v)
    {
        cout << x << " ";
    }
    return 0;
}