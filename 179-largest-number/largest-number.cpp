class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>v;

        if(nums[0]==0){
          if(nums.size()==1){
            return "0";
          }
        }
        int n=nums.size();
        for(int i=0;i<n;i++){
            v.push_back(to_string(nums[i]));
        }
        sort(v.begin(),v.end(),[](string &a, string &b){return (a+b)>(b+a);});
        string ans = "";
        for(auto it:v) ans += it;

        if(ans[0]=='0'){
            return "0";
        }
        
        return ans;
    }
};