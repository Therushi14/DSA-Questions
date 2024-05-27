#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1{1, 3, 2, 4};
    vector<int> v2{3, 1, 2, 4};

    vector<int> ans(v1.size(), 0);
    int count = 0;
    unordered_map<int, int> mp;

    if (v1[0] == v2[0])
    {
        count++;
        ans[0] = count;
    }

    mp[v1[0]]++;
    mp[v2[0]]++;

    for (int i = 1; i < v1.size(); i++)
    {

        if (v1[i] == v2[i])
        {
            count++;
        }
        else
        {
            if (mp.find(v1[i]) != mp.end())
                count++;
            if (mp.find(v2[i]) != mp.end())
                count++;
        }
        ans[i] = count;
        mp[v1[i]]++;
        mp[v2[i]]++;
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}