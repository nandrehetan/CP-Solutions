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
 
    ll n, m;
    cin >> n >> m;
ll ans = 0;
ll d = m / n;
    if (n == m)
    {
        cout << 0 << endl;
    }
    else if ((m%n != 0))
    {
        cout << -1 << endl;
    }
    else
    {
        
        
        while (d % 3 == 0)
        {
            d = d / 3;
            ans++;
        }
        while (d % 2 == 0)
        {
            d = d / 2;
            ans++;
        }
        
 
 
        if (d != 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
        
    }
    
 
    
 
    return 0;
}