#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{1, 2, 2, 1};
    int k = 1;
    unordered_map<int, int> mp;
    int res = 0;
    for (auto i : v)
    {
        res += mp[i - k] + mp[i + k];

        mp[i]++;
    }

    cout << res << endl;
    return 0;
}