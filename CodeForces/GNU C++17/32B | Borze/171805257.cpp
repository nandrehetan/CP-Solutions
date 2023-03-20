#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
 
    string x;
    cin >> x;
    // string ans;
 
    
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == '.')
        {
            cout << 0;
            // i++;
        }
        if (x.length()-1 && x[i] == '-' && x[i+1] == '.')
        {
            cout << 1;
            i++;
        }
 
        if (x.length()-1 && x[i] == '-' && x[i+1] == '-')
        {
            cout << 2;
            i++;
        }
        
    }
    
    // cout << ans << endl ;
    return 0;
    
    
    
 
}