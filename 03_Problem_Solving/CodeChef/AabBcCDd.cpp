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
        string s;
        cin >> s;

        vector<int> freq(26, 0);

        for (char c : s)
        {
            if (isupper(c))
            {
                c = tolower(c);
            }

            freq[c - 'a']++;
        }

        sort(freq.begin(), freq.end(), greater<int>());

        int ans = freq[0] + freq[1];

        cout << ans << "\n";
    }
    return 0;
}
