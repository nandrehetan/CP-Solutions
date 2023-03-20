#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long 
#define ASCII_SIZE 256
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
 
    
    int n;
    cin >> n;
    int mx = 0;
    int sum = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        sum = sum - a;
        sum = sum + b;
        mx = max(mx, sum);
    }
    cout << mx << endl;
    
    return 0;
}