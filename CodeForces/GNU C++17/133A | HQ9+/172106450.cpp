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
 
    string p;
    cin >> p;
    ll c = 0;
    for (int i = 0; i < p.length(); i++)
    {if (p[i] >= 33 && p[i] <= 126)
    {
      if (p[i] == 72 || p[i] == 81 || p[i] == 57 )
      {
        c = 1;
      }
    
    }
    
      
    }
    if (c == 1)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
    return 0;
}