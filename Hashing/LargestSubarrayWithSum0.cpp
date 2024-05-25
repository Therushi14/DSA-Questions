#include<bits/stdc++.h>
using namespace std;
int main()
{   vector<int>v{15,-2,2,-8,1,7,10,23};

    int largestLen = 0;
    unordered_map<int,int> mp;

    int sum = 0;

    for(int i=0;i<v.size();i++){
        sum+=v[i];
        
        if(mp.find(sum)!=mp.end()){
            largestLen = max(largestLen,i-mp[sum]);
        } else {
            mp[sum] = i;
        }
    }

    cout<<largestLen<<endl;
    return 0;
}