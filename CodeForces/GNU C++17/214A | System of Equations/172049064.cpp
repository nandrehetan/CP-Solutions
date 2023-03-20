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
 
    int n, m;
    cin >> n >> m;
 
    int a, b, ans = 0;
 
    for (int a = 0; a <= sqrt(n); a++)
    {   
      b = n - (a * a);
      if ((a + (b * b)) == m)
      {
        ans++;
      }
      
    }
    
    cout << ans << endl;
}