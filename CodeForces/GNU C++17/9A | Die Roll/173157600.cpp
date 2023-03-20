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
 
    int y, w;
    cin >> y >> w;
    int  p = 6 - max(y, w) + 1;
    int q = 6;
    if (p == 1 && q == 6)
    {
        p = 1;
        q = 6;
    }
    else if (p == 2 && q == 6)
    {
        p = 1;
        q = 3;
    }
    else if (p == 3 && q == 6)
    {
        p = 1;
        q = 2;
    }
    else if (p == 4 && q == 6)
    {
        p = 2;
        q = 3;
    }
    else if (p == 5 && q == 6)
    {
        p = 5;
        q = 6;
    }
    else if (p == 6 && q == 6)
    {
        p = 1;
        q = 1;
    }
    cout << p << "/" << q << endl;
    
    
    
}