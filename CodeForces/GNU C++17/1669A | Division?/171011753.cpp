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
 
    int test;
    cin >> test;
    while (test--)
    {
        int r;
        cin >> r;
        if (r >= 1900)
        {
            cout << "Division 1" << endl;
        }
        else if (r >= 1600 && r <= 1899)
        {
            cout << "Division 2" << endl;
        }
        else if (r >= 1400 && r <= 1599)
        {
            cout <<"Division 3" << endl;
        }
        else if (r <= 1399)
        {
            cout <<"Division 4" << endl;
        }
        
        
    }
    return 0;
}