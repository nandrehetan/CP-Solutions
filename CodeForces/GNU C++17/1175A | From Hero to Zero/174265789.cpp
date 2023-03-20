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
        ll n, k;
        cin >> n >> k;
        ll cnt = 0;
        while (n > 0)
        {
            if (n%k==0)
            {
                
                cnt++;
                n = n / k;
            }
            else 
            {
                ll rem = 0;
                rem = n % k;
             cnt = cnt + rem;
             n = n - rem;
            }
            
        }
        cout << cnt << endl;
    }
    return 0;
}