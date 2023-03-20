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
 
    int n, i, index, even = 0, odd = 0;
    cin >> n;
    int a[101];
 
    for (i = 1; i <= n; i++) 
    {
        cin >> a[i];
 
        if (a[i] % 2 == 0) 
        {
            even++;
        } 
        else
        {
            odd++;
        }
    }
 
    for (i = 1; i <= n; i++) 
    {
        if (even > odd) 
        {
            if (a[i] % 2 == 1) 
            {
                index = i;
                break;
            }
        } else 
        {
            if (a[i] % 2 == 0) 
            {
                index = i;
                break;
            }
        }
    }
 
    cout << index;
 
    return 0;
    
    
    return 0;
    
}