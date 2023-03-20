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
 
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n < 2)
        {
            cout << 0 << endl;
        }
        else if(n  % 2 == 0)
        {
            cout << (n/2 ) - 1 << endl;
        }
        else
        {
            cout << (n/2) << endl;
        }
        
    }
    
    return 0;
}