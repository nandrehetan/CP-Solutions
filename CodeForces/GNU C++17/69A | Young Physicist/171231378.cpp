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
 
    int n;
    cin >> n;
    int X = 0, Y = 0, Z = 0;
    while (n--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        X = X + x;
        Y = Y + y;
        Z = Z + z;
    }
    if (X == 0 && Y == 0 && Z == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}