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
        int x, y;
        cin >> x >> y;
        if (x < 2 || y < 2)
        {
            cout << x << " " << y << endl;
        }
        else if (x%2==0 && y%2==0)
        {
            cout << x-1 << " " << y << endl;
        }
        else
        {
            cout << x-1 << " " << y - 1<< endl;
        }
        
        
    }
    
    
    
    return 0;
    
}