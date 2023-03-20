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
 
    
    ll n;
    cin >> n;
    ll a[n];
    ll c_e = 0, c_o = 0, sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
        if (a[i]%2==0)
        {
            c_e++;
        }
        else
        {
            c_o++;
        }
        
    }
    sort(a, a+n);
    int f_o = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2!=0)
        {
            f_o = a[i];
            break;
        }
        
    }
    
    
    if (c_o == n && c_o%2==0)
    {
        cout << sum << endl;
    }
    else if (c_o == n && c_o%2!=0)
    {
        cout << sum-f_o<< endl;
    }
    else if (c_o %2 != 0)
    {
        cout << sum-f_o<< endl;
    }
    else
    {
        cout << sum << endl;
    }
    
    
    return 0;
    
}