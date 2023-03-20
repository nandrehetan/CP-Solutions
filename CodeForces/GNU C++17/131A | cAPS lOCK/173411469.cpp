#include <bits/stdc++.h>
using namespace std;
#define ll long long 
//Hetan Nandre's code 
 
 
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
    int c= 0;
 
    bool ans = true;
    for (int i = 1; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            ans = false;
        }
        
    }
    
    if(ans == true)
    {
    for (int i = 0; i < s.size(); i++)
    {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] = s[i] + 32;
            }
            else 
            {
                s[i] = s[i] - 32;
            }
            
    }
     cout << s << endl;
    }
    else
    {
        cout << s << endl;
    }
    
    
}