#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
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
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    sort(a , a+n);
    for (int i = 0; i < n; i++)
    {
      cout << a[i] << " " ;
    }
    
 
    return 0;
}