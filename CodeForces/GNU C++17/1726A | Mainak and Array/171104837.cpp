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
        int n, i;
        cin >> n;
        int arr[n];
        for ( i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int j = 0;
        for ( i = 0; i < n; i++)
        {
            j = max(j, arr[i] - arr[0]);
        }
        for ( i = 0; i < n - 1; i++)
        {
            j = max(j, arr[i] - arr[i + 1]);
        }
        for ( i = n - 1; i >= 0; i--)
        {
            j = max(j, arr[n - 1] - arr[i]);
        }
        cout << j << endl;
    }
    return 0;
 
}