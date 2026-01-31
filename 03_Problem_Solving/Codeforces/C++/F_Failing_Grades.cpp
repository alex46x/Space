// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         int s = 0;
//         int av = 0;
//         cin >> n;

//         for (int i = 1; i <= n; i++)
//         {
//             int a;
//             cin >> a;
//             s += a;
//             av = (s) / i;
//             if (av < 40)
//             {
//                 cout << "No\n";
//                 break;
//             }
//             else
//             {
//                 cout << "Yes\n";
//             }
//         }

// vector<int> v(n);
// for (auto &x : v)
// {
//     cin >> x;
// }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int s = 0;
        bool ok = true;

        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            s += a;

            if (s < 40 * i)
            {
                ok = false;
            }
        }

        if (ok)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
