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
    cin >>t;
    while (t--)
    {
        string s;
        cin >> s;
        ll a = 0, b= 0, c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]=='A')
            {
                a++;
            }
            else if (s[i]=='B')
            {
                b++;
            }
            else if (s[i]=='C')
            {
                c++;
            }
            
        }
        if ((c+a==b))
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