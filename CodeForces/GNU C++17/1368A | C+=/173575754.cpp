#include <bits/stdc++.h>
using namespace std;
#define ll long long 
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
 
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
    cin >> a >> b >>n;
    int c = 0;
    while ((n/b)>=1 || (n/a)>=1)
    {
       if (a < b)
       {
        a = a + b;
        c++;
       }
       else
       {
        b = b + a;
        c++;
       }
       
     
        
    }
    cout << c-1 << endl;
    }
    
    return 0;
}