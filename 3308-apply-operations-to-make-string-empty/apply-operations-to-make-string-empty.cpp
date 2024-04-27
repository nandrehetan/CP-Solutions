class Solution {
public:
    string lastNonEmptyString(string s) {
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int mx=INT_MIN;
        for(auto it:mp){
            mx=max(mx,it.second);
        }
        vector<char>ch;
        for(auto it:mp){
            if(it.second==mx){
                ch.push_back(it.first);
            }
        }
        string ans="";
        set<char>st;
        for(int i=s.size()-1;i>=0;i--){
            char c=s[i];
            bool bs=binary_search(ch.begin(),ch.end(),c);
            if(bs && !st.count(c)){
                ans+=c;
                st.insert(c);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};