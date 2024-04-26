class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int,int>>vp;
        for(int i=0;i<arr.size();i++){
            vp.push_back({abs(x-arr[i]),arr[i]});
        }
        vector<int>ans;
        sort(vp.begin(),vp.end());
        
        for(int i=0;i<k;i++){
            ans.push_back(vp[i].second);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};