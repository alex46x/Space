#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter array size ";
    cin >> n;
    int arr[n];
    cout << "Enter number : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter Window size : ";
    cin >> k;
    int winsum = 0;
    for (int i = 0; i < k; i++)
    {
        winsum += arr[i];
    }
    cout << winsum << " ";
    for (int i = k; i < n; i++)
    {
        winsum += arr[i] - arr[i - k];
        cout << winsum << " ";
    }
    return 0;
}