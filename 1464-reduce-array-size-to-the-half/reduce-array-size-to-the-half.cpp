class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<pair<int,int>>vp;

        for(auto it:mp){
            vp.push_back({it.second,it.first});
        }
        sort(vp.rbegin(),vp.rend());
        int n = (arr.size()+1)/2;
        set<int>st;
        for(auto it : vp) {
            if(n>0){
                n -= it.first;
                st.insert(it.second);
            }
        }
        return st.size();
    }
};