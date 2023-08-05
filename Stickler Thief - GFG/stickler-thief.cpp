//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    
    int dp[10009];
    
    int recur(int ind, int arr[])
    {
        if(ind==0){
            return arr[ind];
        }
        if(ind<0){
            return 0;
        }
        
        if(dp[ind]!=-1){
            return dp[ind];
        }
        
        int pick = arr[ind]+recur(ind-2,arr);
        int not_pick = recur(ind-1,arr);
        
        return dp[ind] =  max(pick,not_pick);
    }
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        for(int i=0;i<=10006;i++) dp[i]=-1;
        return recur(n-1,arr);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends