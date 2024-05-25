#include<bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int> v{1,2,2,2,2,4,5,6,7,8};
    int n = v.size();
    int l = 0;
    int r = n-1;
    int firstOccur = -1;
    int lastOccue = -1;
    int target = 2;

    while(l<=r){
        int mid = l + (r-l)/2;
        if(v[mid]==target){
            firstOccur = mid;
            r = mid - 1;
        } else if(v[mid]>target){
            r = mid -1;
        } else {
            l = mid + 1;
        }
    }

    l = 0;
    r = n - 1;

    while(l<=r){
        int mid = l + (r-l)/2;
        if(v[mid]==target){
            lastOccue = mid;
            l = mid + 1;
        } else if(v[mid]>target){
            r = mid -1;
        } else {
            l = mid + 1;
        }
    }

    cout<<firstOccur<<" "<<lastOccue<<endl;
    return 0;
}