#include<bits/stdc++.h>
using namespace std;
int main()
{   vector<int> v{1, 5, 5, 1, 1, 8, 8, 10, 10};
    unordered_map<int,int> mp;
    for(auto i:v){
        mp[i]++;
    }

    int ans = 0;

    for(auto i:mp){
        if(i.second%3==0){
            int temp = i.second/3;
            i.second-=temp*3;
            ans+=temp;
        }

        if(i.second%2==0){
            int temp = i.second/2;
            i.second-=temp*2;
            ans+=temp;
        }

        if(i.second==1){
            cout<<-1<<endl;
            return 0;
        }
    }

    cout<<ans<<endl;

    return 0;
}