#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
int sum(int n)
{
    return (n*(n+1))/2;
}
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
 
 
    ll n, k;
    cin >> n >> k;
    if (k <= (n+1)/2)
    {
        cout << (k*2)-1 << endl;
    }
    else
    {
        cout << (k - (n+1)/2)*2 << endl;
    }
    return 0;
}