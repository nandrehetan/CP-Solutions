//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
        
        int cur_min = 0;
        int min_so_far = INT_MAX;
        int total = 0;
        
        for(int i=0;i<num;i++){
            total += arr[i];
            
            cur_min += arr[i];
            min_so_far = min(min_so_far,cur_min);
            if(cur_min>0){
                cur_min=0;
            }
        }
        
        int cur_max = 0;
        int max_so_far = INT_MIN;
        
        for(int i=0;i<num;i++){
            cur_max += arr[i];
            max_so_far = max(max_so_far,cur_max);
            if(cur_max < 0){
                cur_max = 0;
            }
        }
        
        if(max_so_far < 0){
            return max_so_far;
        }
        
        return max(max_so_far, total-min_so_far);
        
        
        // your code here
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends