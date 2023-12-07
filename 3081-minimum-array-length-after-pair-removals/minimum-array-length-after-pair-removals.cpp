class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()/2;
        while(j<nums.size() && i<nums.size()/2){
          if(nums[i]<nums[j]){
            i++;
            ans++;
            ans++;
          }
          j++;
        }
        return nums.size()-ans;
    }
};