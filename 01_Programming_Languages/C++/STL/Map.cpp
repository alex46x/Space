// #include <bits/stdc++.h>
// // #include <map>
// using namespace std;

// int main()
// {
//     map<int, string> mp;

//     mp[1] = "MRX";
//     mp[2] = "Shimul";
//     mp[3] = "X";

//     // cout << mp[1] << endl;

//     // for (auto x : mp)
//     // {
//     //     cout << x.first << " -> " << x.second << endl;
//     // }

//     mp[4] = "Joy";
//     mp[5] = "Sudip";
//     cout << mp.at(2);
//     mp.clear();
//     cout << mp.at(4);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> mp;

    mp[1] = "MRX";
    mp[2] = "Shimul";
    mp[3] = "X";
    mp[4] = "Joy";
    mp[5] = "Sudip";

    cout << "Before clear: " << mp.at(1) << endl;

    mp.clear();

    if (mp.find(4) != mp.end())
    {
        cout << mp.at(4) << endl;
    }
    else
    {
        cout << "Key 4 not found!" << endl;
    }

    return 0;
}