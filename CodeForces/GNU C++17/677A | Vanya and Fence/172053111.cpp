#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
 
    int n, h;
    cin >> n >> h;
    int a[n];
    int width = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];  
    }
    for (int i = 0; i < n; i++)
    {
      if (a[i]  > h)
      {
        width = width + 2;
      }
      else if (a[i] <= h)
      {
        width = width + 1;
      }
      
    }
    cout << width << endl;
    return 0;
    
}