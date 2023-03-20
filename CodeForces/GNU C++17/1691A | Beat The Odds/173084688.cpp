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
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        int e = 0, o = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                e++;
            }
            else if (a[i] % 2 != 0)
            {
                o++;
            }
            
        }
        if (e <= o)
        {
            cout << e << endl;
        }
        else
        {
            cout << o << endl;
        }
        
        
    }
    
    return 0;
    
}