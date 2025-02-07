class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {

        int n=queries.size();
        vector<int>ans(n,-1);

        map<int,int>colormp; // cnt of color
        map<int,int>ballmp; // ball -> color


        for(int i=0;i<n;i++){
            int ball = queries[i][0];
            int color = queries[i][1];

            if(ballmp.count(ball)){
                int prevcolor=ballmp[ball];
                colormp[prevcolor]--;

                if(colormp[prevcolor]==0){
                    colormp.erase(prevcolor);
                }
            }


            ballmp[ball] = color;
            colormp[color]++;


            ans[i] = colormp.size();


        }
        return ans;

        
        
    }
};
