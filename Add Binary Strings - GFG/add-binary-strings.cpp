//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string addBinary(string A, string B)
	{
	     int m = A.length();
    int n = B.length();
    int maxLength = max(m, n);
    string ans(maxLength, '0');
    int carry = 0;

    for (int i = 0; i < maxLength; i++) {
        int a = i < m ? A[m - 1 - i] - '0' : 0;
        int b = i < n ? B[n - 1 - i] - '0' : 0;

        int sum = a + b + carry;
        carry = sum / 2;
        ans[maxLength - 1 - i] = '0' + (sum % 2);
    }

    if (carry == 1) {
        ans = '1' + ans;
    }

    // Remove leading zeros
    int start = 0;
    while (start < ans.length() && ans[start] == '0') {
        start++;
    }
    if (start == ans.length()) {
        return "0";
    }

    return ans.substr(start);
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends