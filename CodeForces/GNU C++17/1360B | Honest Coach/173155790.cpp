#include <bits/stdc++.h>
using namespace std;
#define ll long long 
//Hetan Nandre
 
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
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        int p  =0;
        for (int i = 1; i < n; i++)
        {
            p = abs(a[i]-a[i-1]);
            v.push_back(p);
        }
        sort(v.begin(), v.end());
        cout << v[0] << endl;
    }
    return 0;
    
}