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