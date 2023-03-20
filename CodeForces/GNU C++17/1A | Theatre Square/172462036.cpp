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
 
    ll n, m, a;
    cin >> n >> m >> a;
    ll x, y;
    x = n / a;
    y = m / a;
    if (n % a != 0)   
    {
        x += 1;
    }
    if (m % a != 0) 
    {
        y += 1;
    }
    ll sum = 0;
    sum = x * y;
    cout << sum << endl;
    
    return 0;
}