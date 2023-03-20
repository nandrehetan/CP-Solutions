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
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        vector<int>v;
        if (n == 1)
        {
            cout << a[0] << endl;
        }
        else
        {
            int b = 0;
        int j = n - 1;
            while (b < j)
        {
            v.push_back(a[b]);
            b++;
            v.push_back(a[j]);
            j--;
            if (b==j)
            {
                v.push_back(a[b]);
                break;
            }
            
        }
        for(auto x : v)
        {
            cout << x << " " ;
        }
        cout << endl;
        }
        
        
    }
    
    
    return 0;
}