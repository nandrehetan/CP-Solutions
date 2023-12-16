class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long cur=num/3;
        vector<long long>ans;

        for(long long i=cur-10;i<=cur+10;i++){
            if(((i)+(i+1)+(i+2)) == num){
                ans.push_back(i);
                ans.push_back(i+1);
                ans.push_back(i+2);
            }
        }

        return ans;
    }
};