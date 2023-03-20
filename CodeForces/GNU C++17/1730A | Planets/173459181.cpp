#include <bits/stdc++.h>
using namespace std;
#define ll long long 
//Hetan Nandre's code 
 
 
char mostFrequent(char *arr, char n) {
  // code here
  int maxcount=0;
  char element_having_max_freq;
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
        int n, c;
        cin >> n >> c;
        // int a[n];
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> a[i];
        // }
        vector<int>v(n, 0);
        unordered_map<int, int>m;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            m[v[i]]++;
        }
        int x = 0;
        for ( auto p : m)
        {
            if (p.second < c)
            {
                x = x + p.second;
            }
            else
            {
                x = x + c;
            }
            
        }   
        cout << x << endl;
    }
    
    
}