class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        for(auto it:matrix){
            bool bs=binary_search(it.begin(),it.end(),target);
            if(bs){
                return true;
            }
        }
        return false;
    }
};