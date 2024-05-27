#include<bits/stdc++.h>
using namespace std;
int main()
{   vector<int> v{10, 5, 2, 7, 1, 9};
    int k = 15;

    unordered_map<int,int> mp;
    int sum = 0;
    int maxi = 0;

    for(int i=0;i<v.size();i++){
        sum+=v[i];

        if(sum==k) maxi = max(maxi,maxi+1);

        if(mp.count(sum-k)>0){
            maxi = max(maxi,i - mp[sum-k]);
        }

        if(mp.count(sum)==0){
            mp[sum] = i;
        }
    }

    cout<<maxi<<endl;
    return 0;
}