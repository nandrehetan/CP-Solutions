#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++) mp[arr[i]]++;

        int freq=0;
        for(auto it:mp) freq=max(freq,it.second);

        for(auto it:mp) {
            if(it.second==freq){
                return it.first;
            }
        }
        return 0;
    }
};