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
 
    int test;
    cin >> test;
    while (test--)
    {
      string s;
      cin >> s;
      if (s.size() <= 10)
      {
        cout << s << endl;
      }
      else
      {
        int p = s.size() - 2;
        char a, b;
        for (int i = 0; i < s.size(); i++)
        {
          a = s[0];
          b = s[s.size() - 1];
        }
        cout << a << p << b << endl;
        
      }
      
    }
    
    return 0;
}