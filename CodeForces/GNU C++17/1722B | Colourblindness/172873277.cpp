#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
int sum(int n)
{
    return (n*(n+1))/2;
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
 
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a;
        cin >> b;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] == b[i]) || (a[i] == 'G' && b[i] == 'B') || (a[i] == 'B' && b[i] == 'G'))
            {
                c++;
            }
            
        }
        if (c == n)
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