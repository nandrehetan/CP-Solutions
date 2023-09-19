//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        if (n == 0) {
            return 0;
        }

        // Calculate the position of the first set bit.
        // You can do this by performing a bitwise AND operation with -n.
        // -n will have the same bits as n, except that the rightmost set bit
        // in n will be the leftmost set bit in -n.
        // So, we can use the log2 function to find the position of the set bit.
        return log2(n & -n) + 1;
        // Your code here
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}

// } Driver Code Ends