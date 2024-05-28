#include<bits/stdc++.h>
using namespace std;
int main()
{   vector<int> v{10,5,2,7,1,9,8,7};
    int k = 15;

    int sum = 0;
    unordered_map<int,int> mp;
    int min_len = INT_MAX;

    for(int i=0;i<v.size();i++){
        sum+=v[i];

        if(sum==k) {
            min_len = min(min_len,i+1);
        }

        if(mp.find(sum-k)!=mp.end()){
            min_len = min(min_len,i - mp[sum-k]);
        }

        mp[sum-k] = i;
    }

    cout<<min_len<<endl;
    return 0;
}