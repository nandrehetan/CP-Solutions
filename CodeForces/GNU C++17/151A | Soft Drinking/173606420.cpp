#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long 
//Hetan Nandre's code 
 
 
 
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
 
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >>c >> d >> p >> nl >> np;
    int a = (k * l) / nl;
    int b = c * d;
    int f = p / np;
    vector<int>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(f);
    int x  = *min_element(v.begin(), v.end());
    cout << x / n << endl;
    return 0;
}