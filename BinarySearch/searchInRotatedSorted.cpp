#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{4,5,6,7,0,1,2};
    int n = v.size();
    int l = 0;
    int r = n-1;
    int target = 0;
    int ans = -1;

    while(l<=r){
        int mid = l + (r - l) / 2;

        if(v[mid]==target) ans = mid;

        if (v[0] <= v[mid]){

            if(v[mid] < target || target < v[0]){
                l = mid +1;
            } else {
                r = mid - 1;
            }
        } 
        else {

            if(target < v[mid] || target > v[n-1]){
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}