#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        long long h;
        cin >> n >> m >> h;

        vector<long long> ori(n), add(n, 0);
        for (auto &x : ori)
            cin >> x;

        while (m--)
        {
            int b;
            long long c;
            cin >> b >> c;
            b--;

            add[b] += c;

            if (ori[b] + add[b] > h)
            {
                fill(add.begin(), add.end(), 0);
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << ori[i] + add[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
