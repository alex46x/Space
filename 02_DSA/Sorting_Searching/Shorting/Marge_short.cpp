#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void mare(int a[], int l, int m, int r)
{
    vector<int> temp;
    int i = l;
    int j = m + 1;
    while (i <= m and j <= r)
    {
        if (a[i] < a[j])
        {
            temp.push_back(a[i]);
            i++;
        }

        else
        {
            temp.push_back(a[j]);
            j++;
        }
    }

    while (i <= m)
    {
        temp.push_back(a[i]);
        i++;
    }
    while (j <= r)
    {
        temp.push_back(a[j]);
        j++;
    }

    for (int i = 0; i < temp.size(); i++)
    {
        a[i + l] = temp[i];
    }
}

void margeshort(int a[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        margeshort(a, l, m);
        margeshort(a, m + 1, r);
        mare(a, l, m, r);
    }
}
int main()
{
    int a[] = {23, 234, 12, 54, 23, 745, 23, 7, 2, 4, 1, 57, 9};
    int n = sizeof(a) / sizeof(a[0]);
    // cout << n;
    margeshort(a, 0, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    for (auto x : a)
    {
        cout << x << " ";
    }
    return 0;
}



/*

    Complexity Type       Value

     Best Case           O(n log n)
     Average Case        O(n log n)
     Worst Case          O(n log n)
     Space Complexity    O(n)
     Algorithm Type      Stable, Divide &Conquer


*/