#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
 
    int n;
    cin >> n;
    int p =0;
    while (n--)
    {
        string x;
        cin >> x;
        
        for (int i = 0; i < x.length(); i++)
        {
            if (x[i] == '+' && x[i+1] == '+')
            {
                p += 1;
            }
            if (x[i] == '-' && x[i+1] == '-')
            {
                p -= 1;
            }
            
        }
        
        
    }
    cout << p << endl;
    return 0;
}