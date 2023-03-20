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
 
    string s;
    cin >> s;
    s.erase(remove(s.begin(), s.end(), 'A'), s.end());
    s.erase(remove(s.begin(), s.end(), 'E'), s.end());
    s.erase(remove(s.begin(), s.end(), 'I'), s.end());
    s.erase(remove(s.begin(), s.end(), 'O'), s.end());
    s.erase(remove(s.begin(), s.end(), 'U'), s.end());
    s.erase(remove(s.begin(), s.end(), 'Y'), s.end());
    s.erase(remove(s.begin(), s.end(), 'a'), s.end());
    s.erase(remove(s.begin(), s.end(), 'e'), s.end());
    s.erase(remove(s.begin(), s.end(), 'i'), s.end());
    s.erase(remove(s.begin(), s.end(), 'o'), s.end());
    s.erase(remove(s.begin(), s.end(), 'u'), s.end());
    s.erase(remove(s.begin(), s.end(), 'y'), s.end());
 
    for (ll i = 0; i < s.size(); i++)
    {
      if (s[i] >= 65 && s[i] <= 90)
      {
        s[i] = s[i] + 32;
      }
      
    }
    
    for (ll i = 0; i < s.size(); i++)
    {
      cout << "." << s[i];
    }
    return 0;
}