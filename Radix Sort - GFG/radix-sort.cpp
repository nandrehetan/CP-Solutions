//{ Driver Code Starts
//Initial Template for C++

#include  <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
//User function Template for C++

void radixSort(int v[], int n) 
{ 
   // code here
   for (int t = 0; t < 10; t++) {
        vector<int> cnt(10, 0), aux(n);
        for (int i = 0; i < n; i++) {
            cnt[(v[i] / (int)pow(10, t)) % 10]++;
        }
        for (int i = 1; i < 10; i++) {
            cnt[i] += cnt[i - 1];
        }
        for (int i = n - 1; i >= 0; i--) {
            aux[cnt[(v[i] / (int)pow(10, t)) % 10] - 1] = v[i];
            cnt[(v[i] / (int)pow(10, t)) % 10]--;
        }

        for (int i = 0; i < n; i++) {
            v[i] = aux[i];
        }
    }
} 

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
  
        radixSort(arr, n); 
        
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        
        cout<<endl;
    }
    return 0; 
} 
// } Driver Code Ends