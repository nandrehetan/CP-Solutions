class Solution {
public:
    int recur(int n){
        int cnt=0;
        while(n>1){
            if(n%2==0){
                n /= 2;
            }else{
                n = 3*n + 1;
            }
            cnt++;
        }
        return cnt;
    }
    int getKth(int lo, int hi, int k) {
        vector<int>v;
        vector<pair<int,int>>vp;
        for(int i=lo;i<=hi;i++){
            int cur=recur(i);
            vp.push_back({cur,i});
        }
        sort(vp.begin(),vp.end());
        
        return vp[--k].second;

    }
};