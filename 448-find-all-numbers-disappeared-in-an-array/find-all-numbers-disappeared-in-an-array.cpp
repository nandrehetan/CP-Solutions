class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        map<int,bool>mp;
        for(int i=1;i<=n;i++){
            mp[i]=false;
        }
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=true;
        }
        vector<int>ans;
        for(auto it:mp){
            if(!it.second){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};