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
 
    int s, v1, v2, t1, t2, first, second;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    first = (s * v1) + 2*t1;
    second = (s * v2) + 2*t2;
    if (first < second)
    {
        cout << "First" << endl;
    }
    else if (first > second)
    {
        cout << "Second" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
 
 
}