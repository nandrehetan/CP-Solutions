#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod=1000000007;

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll rad = a+b+c;
    
    ll er1 = max({a,b,c});
    ll er2 = max({0ll,2*er1-rad});
    double ans = 3.14159265359 * rad * rad - 3.14159265359 * er2 * er2;
    cout<<setprecision(12);
    cout<<ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    // cin>>t;
    while (t--){
        solve();
    }
 
    return 0;
}