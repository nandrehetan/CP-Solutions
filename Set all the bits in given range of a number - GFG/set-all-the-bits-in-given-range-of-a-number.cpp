//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string trimLeadingZeros( string binaryStr) {
    int pos = binaryStr.find_first_not_of('0');
    if (pos != string::npos) {
        return binaryStr.substr(pos);
    }
    return "0";  // If the binaryStr is all zeros, return "0".
}

 int binaryToDecimal(string binaryStr) {
    int decimalValue = 0;
    int base = 1;  // Initialize the base for the rightmost bit (2^0).

    for (int i = binaryStr.size() - 1; i >= 0; --i) {
        if (binaryStr[i] == '1') {
            decimalValue += base;
        }
        base *= 2;  // Move to the next higher power of 2.
    }

    return decimalValue;
}
 


    int setAllRangeBits(int n , int l , int r) {

      string sol1 = bitset<30>(n).to_string();
      string sol = trimLeadingZeros(sol1);

       if (l > sol.size() || r > sol.size()) {
        return n;  // Return the original value if the range is out of bounds.
    }
      int L  = sol.size()-l;
      int R = sol.size() - r;

      for(int i =R;i<=L;i++){
          sol[i] = '1';
      }

      int dec = binaryToDecimal(sol);
      return dec;

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