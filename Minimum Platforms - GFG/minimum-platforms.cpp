//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n) {
        // Your code here
        sort(arr, arr + n);
        sort(dep, dep + n);
        int platforms = 1; // Minimum one platform is needed.
        int maxPlatforms = 1; // Tracks the maximum platforms needed.
        int i = 1; // Pointer for arrival times.
        int j = 0; // Pointer for departure times.

        while (i < n && j < n) {
            // If the current train has arrived before the departure of the previous one.
            if (arr[i] <= dep[j]) {
                platforms++; // Increment the platforms.
                i++; // Move to the next arrival.
                // Update maxPlatforms if necessary.
                if (platforms > maxPlatforms) {
                    maxPlatforms = platforms;
                }
            } else { // If the train has departed.
                platforms--; // Decrement the platforms.
                j++; // Move to the next departure.
            }
        }
        return maxPlatforms;
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends