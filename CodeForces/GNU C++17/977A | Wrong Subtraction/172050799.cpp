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
 
    int n, k;
    cin >> n >> k;
    while (k--)
    {
      if (n % 10 != 0)
      {
        n = n - 1;
      }
      else if ( n % 10 == 0)
      {
        n = n / 10;
      }
      
    }
    cout << n << endl;
}