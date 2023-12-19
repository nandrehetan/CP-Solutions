class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>p;
        for(auto it:nums){
            p.push(it);
        }
        for(int i=1;i<k;i++){
            p.pop();
        }
        return p.top();
    }
};