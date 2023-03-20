#include<bits/stdc++.h>
using namespace std;
 
int n, m;
 
void solution()
{
    cin >> n >> m;
    if (n == 1 && m == 1)
    {
        cout << '0' << endl;
        return;
    }
    if (n == 1)
    {
        cout << m << endl;
        return;
    }
    else if (m == 1)
    {
        cout << n << endl;
        return;
    }
    
 
    cout << (n + m + min(n, m) - 2) << endl;
    return;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
 
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
 
    return 0;
    
}