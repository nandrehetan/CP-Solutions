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
 
    int i, j, x = 0;
    int a[5][5];
    int r = 0;
    for ( i = 1; i <= 5; ++i)
    {
        for ( j = 1; j <= 5; ++j)
        {
            cin >> x;
            if (x == 1)
            {
                r = abs(i - 3) + abs(j - 3);
                
            }
        }
        
    }
    
    cout << r << endl;
    return 0;
}