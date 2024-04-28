#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

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