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
 
    int x;
    cin >> x;
    int a, b, c, d;
    a = (x%5)/5;
    b = (x%4)/4;
    c = (x%3)/3;
    d = (x%2)/2;
 
 
    if ( x%5==0)
    {
      cout << (x/5) + a + b + c + d  << endl;
    }
    else
    {
      cout << (x/5) + a + b + c + d + 1 << endl;
    }
    
    
    return 0;
}