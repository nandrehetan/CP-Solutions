#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=998244353;
const int INF = 1e9;
 signed main()
    {
        int n;
        cin>>n;
        while(n%3==0)
        n=n/3;
        while(n%2==0)
        n=n/2;
        if(n==1)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
        return 0;
    }