#include <bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
 
    int k, n, w, i, req = 0;
    cin >> k >> n >> w;
    for ( i = 1; i <= w; i++)
    {
        req = req + ( i * k);
    }
    if (req <= n)
    {
        cout << '0' << endl;
    }
    else
    {
        cout << req - n << endl;
    }
    
    return 0;
}