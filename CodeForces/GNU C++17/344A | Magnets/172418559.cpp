#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
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
 
    int n,i,c=0;
    cin>>n;
    int a[100001];
    i=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
 
    for(i=0; i<n; i++)
    {
        if(a[i]!=a[i+1])
            {
              c++;
            }
    }
    cout<<c<<endl;
    
    return 0;
}