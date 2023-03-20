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
 
    string x;
    cin >> x;
    int c = 0;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == '4' || x[i] == '7')
        {
            c += 1;
        }
        
    }
    if (c == 4 || c == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
 
}