class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()/2;
        int ans=0;
        while(j<nums.size() && i<nums.size()/2){
            if(2*nums[i] <= nums[j]){
                i++;
                ans += 2;
            }
            j++;
        }
        return ans;
    }
};