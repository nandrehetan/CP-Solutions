#include <bits/stdc++.h>
using namespace std;
#define ll long long 
//Hetan Nandre
 
int mostFrequent(int *arr, int n) {
  // code here
  int maxcount=0;
  int element_having_max_freq;
  for(int i=0;i<n;i++)
  {
    int count=0;
    for(int j=0;j<n;j++)
    {
      if(arr[i] == arr[j])
        count++;
    }
 
    if(count>maxcount)
    {
      maxcount=count;
      element_having_max_freq = arr[i];
    }
     
  }
 
  return element_having_max_freq;
}
 
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        vector<int>v;
        for (int i = 1; i < n-1; i++)
        {
            int p = 0;
            p = (a[i+1] - a[i]) + (a[i] - a[i - 1]);
            v.push_back(p);
        }
        cout << *min_element(v.begin(), v.end()) << endl;
        
    }
    
    
    
    return 0;
}