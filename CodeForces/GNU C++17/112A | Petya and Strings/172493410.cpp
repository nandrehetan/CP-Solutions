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
 
    string x, y;
    cin >> x;
    cin >> y;
    for (int i = 0; i < x.size(); i++)
    {
      if (x[i] >= 65 && x[i] <= 90) 
      {
        x[i] += 32;
      }
      
    }
    for (int i = 0; i < y.size(); i++)
    {
      if (y[i] >= 65 && y[i] <= 90) 
      {
        y[i] += 32;
      }
    }
    if (x > y)
    {
      cout << 1 << endl;
    }
    else if (x < y)
    {
      cout << -1 << endl;
    }
    else if (x == y)
    {
      cout << 0 << endl;
    }
    
    
    
    return 0;
}