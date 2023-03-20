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
 
    
    string s;
    cin >> s;
    int k  = 0;
    string b = "hello";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == b[k])
        {
            k++;
        }
        
    }
    if (k == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    
}