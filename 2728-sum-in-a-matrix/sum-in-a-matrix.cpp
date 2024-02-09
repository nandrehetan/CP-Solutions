class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int ans=0;
        while(!nums.empty()){
            int ok = 0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i].empty()){
                    
                }
                else{
                    int rmx = *max_element(nums[i].begin(), nums[i].end());
                    if(rmx >= ok){
                        ok = rmx;
                    }
                    nums[i].erase(find(nums[i].begin(), nums[i].end(), rmx));
                    
                    if(!nums[i].empty()){
                        
                    }else{
                        nums.erase(nums.begin()+i); i=i-1;
                    }
                }
            }
            ans = ans + ok;
        }
        return ans;
        
    }
};