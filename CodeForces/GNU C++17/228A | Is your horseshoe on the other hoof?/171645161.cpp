#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
 
    set<int> x;
    int p = 4;
    int s;
    while (p--)
    {
        cin >> s;
       x.insert(s);
    }
    
    cout << 4 - x.size() << endl;
    return 0;
}