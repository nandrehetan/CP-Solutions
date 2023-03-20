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
        ll n;
        cin >> n;
        ll a[2*n];
        // multiset<ll>m;
        // set<ll>s;
        ll c_o = 0, c_e = 0;
        for (int i = 0; i < 2*n; i++)
        {
            cin >> a[i];
            // m.insert(a[i]);
            // s.insert(a[i]);
            if (a[i]%2==0)
            {
                c_e++;
            }
            else
            {
                c_o++;
            }
            
        }
        // if (c_e == c_o && abs((s.size()-m.size())==0))
        // {
        //     cout << "YES" << endl;
        // }
        // else if (c_e == c_o && abs((s.size()-m.size())%2==0))
        // {
        //     cout << "NO" << endl;
        // }
        // else if (c_e == c_o && abs((s.size()-m.size())%2!=0))
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" <<endl;
        // }
        
        if (c_o == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
        
    }
    
    
    return 0;
}