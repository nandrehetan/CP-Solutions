#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
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
 
    int n;
    cin >> n;
    int a[n];
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      v.push_back(a[i]);
    }
    int tot = 0;
    for (int i = 0; i < n; i++)
    {
      tot += a[i];
    }
    
      tot = tot / 2;
    
 
    sort(v.rbegin(), v.rend());
 
    int sum = 0;
    int  j =0;
    for (int i = 0; i < n; i++)
    {
      sum = sum + v[i];
      j++;
      if (sum > tot)
      {
        break;
      }
      
      
      
    }
    cout << j << endl;
    
}