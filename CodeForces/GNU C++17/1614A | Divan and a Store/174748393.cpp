#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long 
#define ASCII_SIZE 256
//Hetan Nandre's code 
   
 
double eps = 1e-6;
 
 
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
        ll n, l, r, k;
        cin >> n >> l >> r >> k;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll cnt = 0;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= r && a[i] >= l)
            {
                v.push_back(a[i]);
            }
            
        }
        sort(v.begin(), v.end());
        ll s = 0;
        for (int i = 0; i < v.size(); i++)
        {
            s = s + v[i];
            
            if (s <= k)
            {
                
                cnt++;
            }
            
            else
            {
                break;
            }
            
            
        }
        
        cout << cnt << endl;
    }
    
    
    return 0;
}