class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=0;i--){
            int cur=(-1)*nums[i];
            bool bs=binary_search(nums.begin(),nums.end(),cur);
            if(bs){
                return nums[i];
            }
        }
        return -1;
    }
};