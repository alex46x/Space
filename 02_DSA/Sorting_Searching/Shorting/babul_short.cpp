#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{

    for (int i = 0; i < 5; i++)
    {
        bool sw = false;
        for (int j = 0; j < 5; j++)
        {
            if (a[i] < a[j])
            {
                // swap(a[i], a[j]);
                a[i] = (a[i] + a[j]) - (a[j] = a[i]);
                sw = true;
            }
        }
        if (!sw)
        {
            break;
        }
    }
}

int main()
{

    int a[5] = {3, 12, 56, 9, 1};
    int n = sizeof(a) / sizeof(a[0]);
    bubbleSort(a, n);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

        return 0;
}

// Case    Time Complexity
// Best        O(n)
// Average     O(n²)
// Worst       O(n²)
// Space        O(1)