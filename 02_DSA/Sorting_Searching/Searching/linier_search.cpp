#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int linier(int a[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[] = {23, 24, 3, 12, 435, 7345, 2, 1, 123, 34};
    int n = sizeof(a) / sizeof(a[0]);
    int index = linier(a, n, 12);
    if (index != -1)
    {
        cout << "Element found in index " << index;
    }
    else
    {
        cout << "inndex not found !";
    }

    return 0;
}