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
 
    int k, l, m, n, d;
    cin >> k;
    cin >> l ;
    cin >>m;
    cin >> n;
    cin >> d;
    int ans = 0;
    set <int> x;
    for (int i = 1; i <= d; i++)
    {
      if (i%k == 0)
      {
        x.insert(i);
      }
      if (i%l == 0)
      {
        x.insert(i);
      }
      if (i%m == 0)
      {
        x.insert(i);
      }
      if (i%n == 0)
      {
        x.insert(i);
      }
    }
    cout << x.size() << endl;
    return 0;
}