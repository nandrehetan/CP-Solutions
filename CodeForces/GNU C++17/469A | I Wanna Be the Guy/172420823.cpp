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
    set<int>v;
    int p;
    cin >> p;
    int a[p];
    for (int i = 0; i < p; i++)
    {
      cin >> a[i];
      v.insert(a[i]);
    }
    int q;
    cin >> q;
    int b[q];
    for (int i = 0; i < q; i++)
    {
      cin >> b[i];
      v.insert(b[i]);
    }
    int x = v.size();
    if (n == v.size())
    {
      cout << "I become the guy." << endl;
    }
    else
    {
      cout << "Oh, my keyboard!" << endl;
    }
    
    
    return 0;
}