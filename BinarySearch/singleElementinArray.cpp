#include<bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int> v{3,3,7,7,10,11,11};
    int n = v.size();
    int l = 0;
    int r = n-1;
    
    while(l<r){
        
        int mid = l + (r-l)/2;

        if(mid%2 and v[mid]==v[mid-1] || !mid%2 and v[mid]==v[mid+1]){
            l = mid +1;
        } else {
            r = mid;
        }
    }

    cout<<v[l];
    return 0;
}