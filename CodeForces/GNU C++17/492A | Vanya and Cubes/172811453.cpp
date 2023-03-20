#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
int sum(int n)
{
    return (n * (n + 1))/2;
}
 
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
 
    int n;
    cin >> n;
    int s = 0;
    int h = 0;
    for (int i = 1; i <= n; i++)
        {
            s = s + sum(i);
            if (n >= s)
            {
                h++;
            }
            else
            {
                break;
            }
            
            
        }
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << h << endl;
        }
        
        
   
    
    
    return 0;
}