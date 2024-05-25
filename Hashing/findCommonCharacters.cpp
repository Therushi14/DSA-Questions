#include<bits/stdc++.h>
using namespace std;
int main()
{   
    vector<string> v{ "bella","label","roller"};

    unordered_map<char,int> min_freq;
    for(char ch='a';ch<='z';ch++){
        min_freq[ch] = 1000;
    }

    for(auto word:v){

        unordered_map<char,int> mp;

        for(auto ch:word){
            mp[ch]++;
        }

        for(char ch='a';ch<='z';ch++){
            min_freq[ch] = min(min_freq[ch],mp[ch]);
        }
    }
    vector<string> ans;

    for(char ch='a';ch<='z';ch++){
        if(min_freq[ch]>0){
            ans.push_back(string(1,ch));
        }

        min_freq[ch]--;
    }

    for(auto i:ans){
        cout<<i<<" ";
    }

    return 0;
}