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
 
    
    int t;
    cin >>t;
    while (t--)
    {
        string x;
        cin >> x;
        int zero = 0, one = 0;
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] == '0')
            {
                zero++;
            }
            else if (x[i] == '1')
            {
                one++;
            }
        }
        int  p= 0;
        p = min(zero, one);
        if (p%2!=0)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NET" << endl;
        }
        
        
    }
    return 0;
    
}