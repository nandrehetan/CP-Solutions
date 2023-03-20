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
    if (n % 4 == 0 || n % 7 == 0 || n % 44 == 0 || n % 47 == 0 || n % 74 == 0 || n % 77 == 0 || n % 444 == 0 || n % 447 == 0 || n % 474 == 0 || n % 744 == 0 || n % 477 == 0  || n % 747 == 0 || n % 774 == 0 || n % 777 == 0 )
    { 
      cout << "YES" << endl;
    }
    
    
    else
    {
      string s;
    s = to_string(n);
    
    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '4' || s[i] == '7')
      {
        c++;
      }
    }
    if (c == s.size())
    {
      cout << "YES" << endl;
    }
    
    else
    {
      cout << "NO" << endl;
    }
    }
    
    
    
    return 0;
}