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
        int a, b;
        cin >> a >> b;
        if (a==b)
        {
            cout << 0 << endl;
        }
        else if (a < b)
        {
            if ((b-a)%10==0)
            {
                cout << (b-a)/10 << endl;
            }
            else if ((b-a)%10!=0)
            {
                cout << (b-a)/10  + 1<< endl;
            }
            
        }
        else if (a > b)
        {
            if ((a-b)%10==0)
            {
                cout << (a-b)/10 << endl;
            }
            else if ((a-b)%10!=0)
            {
                cout << (a-b)/10  + 1<< endl;
            }
        }
        
    }
    
return 0;
    
}