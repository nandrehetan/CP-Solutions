class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans=0;
        for(int i=0;i<mat[0].size();i++){
            for(int j=0;j<mat.size();j++){
                if(i==j){
                    ans+=mat[i][j];
                }
            }
        }
        int i=0;
        int j=mat[0].size()-1;
        while(j>=0){
            if(i!=j){
                ans+=mat[i][j];
                cout<<mat[i][j]<<" ";
                
            }
            i++;
            j--;
            
        }
        return ans;
    }
};