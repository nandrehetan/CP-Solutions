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
 
    ll int n;
    cin >> n;
    if (n % 2 == 0)
    {
      cout << n/2 << endl;
    }
    else
    {
      cout << - (n+1)/2 << endl;
    }
    
    
    return 0;
}