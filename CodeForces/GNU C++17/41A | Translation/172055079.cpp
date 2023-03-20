#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
 
    string x;
    cin >>  x;
    string y;
    cin >> y;
    reverse(x.begin(), x.end());
    if (x == y)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
    
    return 0;
    
}