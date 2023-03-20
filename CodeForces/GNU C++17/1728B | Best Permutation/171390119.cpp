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
 
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        if (n == 4)
        {
            cout << 2 << " " << 1 << " " << 3 << " " << 4 << " " << endl;
            
        }
        else
        {
        int i;
        for ( i = 0; i < n - 5; i++)cout << i + 4 << " ";
        {
            cout << 2 << " " << 3 << " " << 1 << " " << n - 1 << " " << n << endl;        
        }
        }
    }
    return 0;
}