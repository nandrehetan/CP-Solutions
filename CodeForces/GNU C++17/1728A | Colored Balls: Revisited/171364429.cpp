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
        int arr[n];
        int i;
        for ( i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int x = 0;
        int j = 0;
        for ( i = 0; i < n; i++)
        {
            if (arr[i] >= x)
            {
                x = arr[i];
                j = i;
            }
            
        }
        cout << (j + 1) << endl;
 
        
    }
    return 0;
}