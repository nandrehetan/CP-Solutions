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
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if ( n % 4 == 0)
        {
            cout<< "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    
    return 0;
}