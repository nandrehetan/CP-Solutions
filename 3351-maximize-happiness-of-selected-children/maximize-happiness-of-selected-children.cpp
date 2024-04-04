class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long int ans=0;
        int cnt=0;
        sort(happiness.begin(),happiness.end());
        reverse(happiness.begin(),happiness.end());
        for(int i=0;i<happiness.size();i++){
            if(k>0){
                happiness[i]-=cnt;
                
                if(happiness[i]>=0){
                    ans+=happiness[i];
                }
                
                cnt++;
                k--;
            }
        }
        return ans;
    }
};