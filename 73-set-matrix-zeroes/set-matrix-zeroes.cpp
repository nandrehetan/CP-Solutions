class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>vp;
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    vp.push_back({i,j});
                }
            }
        }
        for(auto it:vp){
            int x=it.first;
            int y=it.second;
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    if(i==x || y==j){
                        matrix[i][j]=0;
                    }
                }
            }
        }
    }
};