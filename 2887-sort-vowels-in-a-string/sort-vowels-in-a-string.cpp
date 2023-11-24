class Solution {
public:
    string sortVowels(string s) {
        string v="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
               s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
                   v.push_back(s[i]);
               }
        }
        sort(v.begin(),v.end());
        cout<<v<<endl;
        string ans = "";

        int cur=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
               s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
                   ans.push_back(v[cur]);
                   cur++;
                //    i++;
               }
            else{
                ans.push_back(s[i]);
            }
        }

        return ans;
    }
};