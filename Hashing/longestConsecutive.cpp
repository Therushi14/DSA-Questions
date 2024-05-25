#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums{0,3,7,2,5,8,4,6,0,1};

    unordered_map<int, bool> present, checked;

    for (auto i : nums)
    {
        present[i] = true;
    }
    int fLen = 0;
    for (auto i : nums)
    {
        if (!checked[i] and !present[i - 1])
        {
            int start = i;
            int currLen = 0;
            while(present[start]){
                currLen++;
                checked[start]=true;
                start++;
            }
            fLen = max(fLen,currLen);
        }

        
    }
    cout<<fLen<<endl;
    return 0;
}