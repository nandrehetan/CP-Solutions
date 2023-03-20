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
 
    int t;
    cin >> t;
    while (t--)
    {
      string s;
      cin >> s;
      
      if(s.size() % 2 != 0) {
        cout << "NO" << endl;
      }
      else if (s.size() % 2 == 0)
      {
        string a;
        string b;
        for (int i = 0; i < s.size()/2; i++)
        {
          a += s[i];
        }
        for (int i = s.size()/2; i < s.size(); i++)
        {
          b += s[i];
        }
        // cout << a << endl;
        // cout << b << endl;
        if (a == b)
        {
          cout << "YES" << endl;
        }
        else 
        {
          cout << "NO" << endl;
        }
        
      }
      
    }
    
    return 0;
}