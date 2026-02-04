#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int Binary_search(int a[], int st, int end, int k)
{
    if (st < end)
    {
        int m = (st + end) / 2;
        if (a[m] == k)
        {
            return m;
        }
        else if (a[m] > k)
        {
            return Binary_search(a, st, m - 1, k);
        }
        else
        {
            return Binary_search(a, m + 1, end, k);
        }
    }
    return -1;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 12, 33, 45, 56, 100};
    int n = sizeof(a) / sizeof(a[0]);
    cout << Binary_search(a, 0, n, 3);

    return 0;
}