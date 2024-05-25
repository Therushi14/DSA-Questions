#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{1,2,4,5,6,4,3,2};
    unordered_map<int,int> mp;
    int target;
    cin>>target;
    for(auto i:v){
        if(mp.find(target-i)!=mp.end()){
            cout<<i<<" "<<target-i<<endl;
            break;
        } else {
            mp[i]++;
        }
    }
    return 0;
}