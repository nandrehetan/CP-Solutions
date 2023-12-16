class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                s.insert(nums[i]);
            }
        }

        int cnt=1;
        for(auto it:s){
            if(it==cnt){
                cnt++;
            }else{
                return cnt;
            }
        }
        return cnt;
    }
};