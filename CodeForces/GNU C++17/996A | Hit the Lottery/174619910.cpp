#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long 
#define ASCII_SIZE 256
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
 
    ll n;
    cin >> n;
    ll a = 0, b = 0, c = 0, d = 0, e = 0;
    a = n / 100;
    b = (n%100)/20;
    c = (n%20)/10;
    d = (n%10)/5;
    e = (n%5);
    cout << a+b+c+d+e << endl;
 
    return 0;
}