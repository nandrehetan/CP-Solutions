#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
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
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int j =0;
    for (int i = 0; i < n; i++)
    {
      j += a[i];
    }
    if (j > 0)
    {
      cout << "HARD" << endl;
    }
    else
    {
      cout << "EASY" << endl;
    }
    return 0;
}