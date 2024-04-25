class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        s.insert(nums);
        while(next_permutation(nums.begin(),nums.end())){
            s.insert(nums);
        }
        vector<vector<int>> ans;
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
    }
};