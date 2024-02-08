class Solution {
public:
    int numSquares(int n) {
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;

        for(int i=2;i<=n;i++){
            int mx = INT_MAX;
            for(int j=1;j*j<=i;j++){
                int rem = i-j*j;
                if(dp[rem] <mx ){
                    mx = dp[rem];
                }
            }
            dp[i]=mx+1;
        }
        return dp[n];
    }
};