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
 
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i;
    int c = 0;
    for ( i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i+1])
        {
            c++;
        }
        
    }
    cout << c << endl;
}