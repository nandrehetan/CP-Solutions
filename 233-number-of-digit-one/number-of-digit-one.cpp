class Solution {
public:
    int countDigitOne(int n) {
        int res = 0;
        long long int m = 0;
        for (long long int  i=1;i<=n;i=i*10){
            long long int  d = n%(i*10)/i;
            res += d*m + (d == 1)*(n%i + 1) + (d>1)*(i);
            m = m*10 +i;
        }
        return res;
        
    }
};