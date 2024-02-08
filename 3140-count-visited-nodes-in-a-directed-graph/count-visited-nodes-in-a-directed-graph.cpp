
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

class Solution {
private:
    vector<int> res;
    int dfs(int node, vector<int>& edges){
        if(res[node]!=0){
            return res[node];
        }
        int curr = 1;
        curr+=dfs(edges[node],edges);
        res[node]=curr;
        return curr;
    }
public:
    vector<int> countVisitedNodes(vector<int>& edges) {
        int n = edges.size();
        vector<int> indegree(n);
        vector<int> incycle(n,1);
        res.resize(n,0);

        for(int i = 0 ; i<n ; i++){
            indegree[edges[i]]++;
        }
        queue<int> q;
        for(int i = 0; i<n ; i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int top=q.front();
            q.pop();
            incycle[top]=0;
            indegree[edges[top]]--;
            if(indegree[edges[top]]==0){
                q.push(edges[top]);
            }
        }

        int cyclelen=0;
        vector<int> vis(n,0);
        for(int i = 0 ; i<n; i++){
            if(vis[i]==1) continue;

            int node = i;
            if(incycle[node]==1){
                vector<int> cycle;
                cycle.push_back(node);
                int next=edges[node];
                while(node!=next){
                    cycle.push_back(next);
                    vis[next]=1;
                    next=edges[next];
                }
                cyclelen=cycle.size();
                for(int i = 0; i<cycle.size(); i++){
                    res[cycle[i]]=cyclelen;
                }
            }
        }
        for(int i = 0 ; i<n ; i++){
            if(incycle[i]==0){
                res[i]=dfs(i,edges);
            }
        }
        return res;
    }
};