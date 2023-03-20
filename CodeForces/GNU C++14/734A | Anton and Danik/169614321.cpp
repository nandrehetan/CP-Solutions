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
 
    int n, i;
    cin >> n;
    string s;
    cin >> s;
    int anton = 0;
    int danik = 0;
    for ( i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            anton += 1;
        }
        else if (s[i] == 'D')
        {
            danik += 1;
        }
        
    }
    if (anton > danik)
    {
        cout << "Anton" << endl;
    }
    else if (anton < danik)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
    
 
}