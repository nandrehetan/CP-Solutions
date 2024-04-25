class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int cnt=0;
        while(next_permutation(nums.begin(),nums.end())){
            cnt++;
            if(cnt==1){
                return;
            }
        }
    }
};