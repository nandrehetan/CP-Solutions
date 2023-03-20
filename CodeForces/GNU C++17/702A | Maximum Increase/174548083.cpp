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
    // set<int>s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // s.insert(a[i]);
    }
    ll p = 1;
    ll c = 1;
    for (int i = 1; i < n ; i++)
    {
        if (a[i]>=a[i-1] && a[i]!=a[i-1])
        {
           
            c++;
            p = max(c, p);  
        }
        else
        {
            c =  1;
            continue;
        }
        
        
    }
   
        cout << p << endl;
   
    
    return 0;
}