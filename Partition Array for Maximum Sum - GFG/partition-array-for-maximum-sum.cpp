//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int recur(int ind, int n, int k , vector<int>& arr, int dp[510]){
        if(n==ind){
            return 0;
        }
        
        if(dp[ind]!=-1){
            return dp[ind];
        }
        
        int len=0;
        int ans=INT_MIN;
        int mx = INT_MIN;
        
        for(int j=ind;j<min(n,ind+k);j++){
            len++;
            mx = max(mx, arr[j]);
            int sum = len*mx + recur(j+1,n,k,arr,dp);
            ans = max(ans,sum);
            
        }
        return dp[ind] = ans;
    }
    int solve(int n, int k, vector<int>& arr){
        int dp[510];
        memset(dp,-1,sizeof(dp));
        return recur(0,n,k,arr,dp);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            int x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        cout<<obj.solve(n,k,arr)<<"\n";
    }
    return 0;
}
// } Driver Code Ends