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
    vector<char>c;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1' || s[i] == '2' || s[i] == '3')
        {
            c.push_back(s[i]);
        }
        
    }
    sort(c.begin(), c.end());
    for (int i = 0; i < c.size()-1; i++)
    {
        cout << c[i] << "+";
    }
    cout << c[c.size()-1];
    
    return 0;
    
}