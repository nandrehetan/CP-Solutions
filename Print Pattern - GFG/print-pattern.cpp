//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    void fun(int N, vector<int>& vec) {
        vec.push_back(N);
        if (N < 1) {
            return;
        }
        fun(N-5,vec);
        vec.push_back(N);
    }
    
    vector<int> pattern(int N) {
        vector<int> vec;
        fun(N, vec);
        return vec;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends