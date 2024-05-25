#include<bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int> v{1,2,3};
    int count = 0;
    int k = 2;
    unordered_map<int,int> mp;
    for(int i=0,j=0;j<v.size();j++){
        mp[v[i]]++;
        int d  = mp.size();
        
        while(d>k){
            mp[v[i]]--;
            
            if(mp[v[i]]==0){
                mp.erase(v[i]);
            }
            i++;

            d = mp.size();
        }

        count+=(j-i+1);
    }

    cout<<count<<endl;
    return 0;
}