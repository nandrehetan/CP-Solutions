class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto &it:matrix){
            bool bs=binary_search(it.begin(),it.end(),target);
            if(bs){
                return true;
            }
        }
        return false;
    }
};