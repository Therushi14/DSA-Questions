#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{1 ,2 ,3, 5, 8, 8 ,8, 8, 2, 1, 1, 1, 1, 1, 1};
    int count = 0;
    int sum = 0;
    int k = 4;
    for(int i=0,j=0;j<v.size();j++){
        sum += v[j];
        
        while(sum>k){
            sum-=v[i];
            i++;
        }

        count += (j-i+1);
    }

    cout<<count<<endl;
    return 0;
}