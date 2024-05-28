#include<bits/stdc++.h>
using namespace std;

int sum_ofDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main()
{   vector<int> v = {51, 71, 17, 42};
    unordered_map<int,int> mp;
    int ans = -1;

    for (int i = 0; i < v.size(); i++) {
        int digitSum = sum_ofDigits(v[i]);
        if (mp.find(digitSum) != mp.end()) {
            int sum = v[i] + mp[digitSum];
            ans = max(sum, ans);
            mp[digitSum] = max(mp[digitSum], v[i]);
        } else {
            mp[digitSum] = v[i];
        }
    }

    cout<< ans;
    return 0;
}