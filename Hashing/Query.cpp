#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{1,1,1,3,4,4,5};

    int q;
    cin>>q;
    unordered_map<int,int> mp;
    for(auto i:v){
        mp[i]++;
    }
    while(q--){
        int temp;
        cin>>temp;
        cout<<mp[temp]<<endl;
    }
    return 0;
}