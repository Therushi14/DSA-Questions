#include<bits/stdc++.h>
using namespace std;
int main()
{   vector<int> v{10 , 2, -2, -20, 10};
    unordered_map<int,int> mp;
    int count = 0;
    int sum = 0;
    int k = -10;
    for(int i=0;i<v.size();i++){
        sum += v[i];

        if(sum==k) count++;

        count += mp[sum-k];

        mp[sum]++;

    }

    cout<<count<<endl;
    return 0;
}