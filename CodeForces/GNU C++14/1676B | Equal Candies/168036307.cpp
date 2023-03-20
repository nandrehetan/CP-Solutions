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
 
    int t;
    cin >> t ;
    while (t > 0)
    {
        int n, i, small;
        int count = 0;
        cin >> n;
        int arr[n];
        for ( i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        small = arr[0];
        for ( i = 0; i < n; i++)
        {
            count += (arr[i] - small);
        }
        
        cout << count << endl;
 
        t = t - 1;
    }
    return 0;   
}