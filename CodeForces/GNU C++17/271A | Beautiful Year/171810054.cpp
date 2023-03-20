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
 
    int y;
    cin >> y;
    
    int j = 0;
    while(true)
    {
        y = y + 1;
        int a, b, c, d;
        a = y % 10;
        b = y/10% 10;
        c = y/100 % 10;
        d = (y/1000);
        if (a != b && a != c && a != d && b != c && b != d && c!= d)
        {
            break;
        }
        
    }
    cout << y << endl;
    return 0;
 
}