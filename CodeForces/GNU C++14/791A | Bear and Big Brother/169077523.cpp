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
 
    int a, b, count = 0;
    cin >> a >> b;
    while (a <= b)
    {
        a = a * 3;
        b = b * 2;
        count = count + 1;
        a > b;
    }
    cout << count << endl;
    return 0;
}