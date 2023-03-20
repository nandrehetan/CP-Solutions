#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long 
#define ASCII_SIZE 256
#define MAX_NAME_LEN 1000
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
    getline(cin, s);
    // cout << s;
    set<char>x;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            x.insert(s[i]-'0');
        }
        else
        {
            continue;
        }
        
        
    }
    // for(auto f:x)
    // {
    //     cout << f;
    // }
    cout << x.size() << endl;
    return 0;
}