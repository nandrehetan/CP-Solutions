class Solution {
public:
    const int N = 1e5+9;
    int dp[90900][3];
    long long int recur(int ind, vector<int>&nums,long long int cur_sum){
        if(ind==nums.size()){
            if(cur_sum==0){
                return 0;
            }
            return -1000;
        }
        if(dp[ind][cur_sum] != -1){
            return dp[ind][cur_sum];
        }
        //Take current number
        long long int take = nums[ind] + recur(ind+1,nums,(cur_sum+nums[ind])%3);

        //Do not take current number
        long long int not_take = recur(ind+1,nums,cur_sum);

        return dp[ind][cur_sum] = max(take,not_take);
    }
    int maxSumDivThree(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        long long int ans = recur(0,nums,0ll);
        return ans;
    }
};