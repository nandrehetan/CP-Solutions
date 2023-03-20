#include <bits/stdc++.h>
using namespace std;
#define ll long long 
//Hetan Nandre
 
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
        int l, r, x;
        cin >> l >> r >> x;
        int ans = r / x + r % x;
        int m = r / x * x - 1;
        if(m >= l)ans = max(ans, m / x + m % x);
        cout << ans << endl;
        
        
    }
    
    return 0;
}