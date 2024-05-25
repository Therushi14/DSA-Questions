#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 5, 4, 3, 2};
    unordered_map<int, int> mp;
    int maxDist = -1;
    for (int i = 0; i < v.size(); i++)
    {
        if (mp.find(v[i]) != mp.end())
        {
            maxDist = max(abs(mp[v[i]] - i), maxDist);
        }
        else
        {
            mp[v[i]] = i;
        }
    }
    cout << maxDist << endl;
    return 0;
}
