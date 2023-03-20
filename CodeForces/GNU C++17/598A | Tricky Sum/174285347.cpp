#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long 
#define ASCII_SIZE 256
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
 
    
    ll t;
    cin >>t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = n * (n+1)/2;
        ll a=1;
        while(a<=n)
        {
            ans =ans - 2*a;
            a=a*2;
        }
        cout << ans << endl;
    }
    return 0;
}