#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long 
#define ASCII_SIZE 256
//Hetan Nandre's code 
   
 
double eps = 1e-6;
 
 
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
 
    
    int n, k;
    cin >> n >> k;
    int p = 240 - k;
    int ans = 0;
    int i = 1;
    while (ans <= p)
    {
        
        ans = ans + (5*i);
        i = i + 1;
    }
    if (i-2 > n)
    {
        cout << n << endl;
    }
    else
    {
        cout << i - 2<< endl;
    }
    
    
    
    return 0;
}