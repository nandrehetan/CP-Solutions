#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define ll long long
const int MOD =1e9 + 7;
//const int INF= LLONG_MAX >>1;
void solve()
{
   long long int a,b;
   cin >> a >> b;
    
   if(b == 1) cout << "NO\n";
   else cout << "YES\n" << a << ' ' << a*(b + b + b - 1) << ' ' << (3*a*b) << '\n';
}
 
signed main()
{
    // fast;
    
    int t = 1;
    
    cin >> t;
    
    while(t--)
        
    solve();
}