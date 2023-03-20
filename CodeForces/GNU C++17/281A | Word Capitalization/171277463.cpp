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
 
    string s;
    cin >> s;
    if (s[0] >= 65 && s[0] <= 90)
    {
        cout << s << endl;
    }
    else if (s[0] >= 97 && s[0] <= 122)
    {
        
        s[0] = s[0] - 32;
        cout << s << endl;
    }
    return 0;
    
}