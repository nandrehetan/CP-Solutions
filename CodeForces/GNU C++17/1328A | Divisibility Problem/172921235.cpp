#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
int sum(int n)
{
    return (n*(n+1))/2;
}
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
 
 
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        
        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << b - (a % b) << endl;
        }
        
        
    }
    
    
}