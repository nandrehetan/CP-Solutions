class Solution {
public:
    string reverseWords(string s) {
        vector<string>ans;
        int n=s.size();
        for(int i=0;i<n;i++){
            string cur="";

            while(s[i]!=' ' && i<n){
                cur += s[i];
                i++;
            }
            ans.push_back(cur);

            while(s[i]==' ' && i<n){
                i++;
            }
            i--;
            // cout<<cur<<endl;
        }
        reverse(ans.begin(),ans.end());
        string final="";

        for(auto it: ans){
            string cur = it;
            for(auto ok:cur){
                final += ok;
            }
            final += ' ';
        }
        final.pop_back();
        while(final[final.size()-1]==' '){
            final.pop_back();
        }
        return final;

        // return "";
    }
};