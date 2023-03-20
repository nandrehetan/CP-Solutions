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
 
    string a, b;
    cin >> a ;
    cin >> b;
    string x;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            x = x + '1';
        }
        else if (a[i] == b[i])
        {
            x = x + '0';
        }
        
    }
    cout << x << endl;
    
    return 0;
}