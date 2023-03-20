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
 
    
    ll n, l;
    cin >> n >> l;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    ll p = 0;
    for (ll i = 1; i <= n; i++)
    {
        p = max(p, abs(a[i]-a[i-1]));
    }
    ll rez = 0;
    ll s = a[0];
    ll f = l - a[n-1];
    rez = 2*max(s, f);
    for (ll i = 0; i < n-1; i++)
    
        rez = max(rez, a[i+1]-a[i]);
 
    cout.precision(20);
    cout << rez/2.0 << endl;
 
    return 0;
 
}