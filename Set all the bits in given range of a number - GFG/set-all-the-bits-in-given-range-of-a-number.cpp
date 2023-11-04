//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setAllRangeBits(int N , int L , int R) {
        // code here
        int mask = ((1 << (R - L + 1)) - 1) << (L - 1);

    // Perform a bitwise OR operation with N
    int result = N | mask;

    return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,L,R;
        
        cin>>N>>L>>R;

        Solution ob;
        cout << ob.setAllRangeBits(N,L,R) << endl;
    }
    return 0;
}
// } Driver Code Ends