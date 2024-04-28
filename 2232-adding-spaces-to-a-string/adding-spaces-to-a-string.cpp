class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans="";
        int i=0;int j=0;
        while(j<spaces.size()){
            while(i!=spaces[j]){
                ans+=s[i];
                i++;
                
            }
            j++;
            ans+=" ";
        }
        while(i<s.size()){
            ans+=s[i];
            i++;
        }
        return ans;
    }
};