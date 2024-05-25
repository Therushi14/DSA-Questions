/*William Macfarlane wants to look at an array.
You are given a list of N numbers and Q queries. Each query is specified by two numbers i and j;
the answer to each query is the sum of every number between the range [i, j] (inclusive).
Note: the query ranges are specified using 0-based indexing.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int> v{1,2,3,4,5,6,7,8};
    int q;
    cin>>q;
    for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }

    while(q--){
        int i,j;
        cin>>i>>j;
        cout<<v[j]-v[i-1]<<endl;
    }
    return 0;
}