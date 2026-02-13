#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void bubol(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool sw = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
                sw = true;
            }
        }

        if (!sw)
        {
            break;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
}

int main()
{
    int arr[5] = {23, 34, 1, 5, 21};

    bubol(arr, 5);
    for (auto &x : arr)
    {
        cout << x << " ";
    }
    return 0;
}