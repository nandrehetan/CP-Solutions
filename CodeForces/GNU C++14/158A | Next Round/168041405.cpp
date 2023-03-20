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
 
    int n, k, i, count = 0;
    cin >> n >> k;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for ( i = 0; i < n; i++)
    {
        if (arr[k-1] <= arr[i] && arr[i] > 0)
        {
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}