#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long B, G, X, Y, N;
        cin >> B >> G >> X >> Y >> N;

        if (X + Y > N)
        {
            cout << -1 << "\n";
            continue;
        }

        long long Rmn = (B + G + N - 1) / N;

        long long Rmx = min(B / X, G / Y);

        if (Rmn > Rmx)
            cout << -1 << "\n";
        else
            cout << Rmn << "\n";
    }

    return 0;
}
