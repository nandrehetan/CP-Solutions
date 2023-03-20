#include <bits/stdc++.h>
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
 
    int a, b, c;
    cin >> a >> b >> c;
    int p = a + b + c;
    p = max(p, a * b * c);
    p = max(p, a* (b + c));
    p = max(p, (a +b )*c);
    cout << p << endl;
    return 0;
}