#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod=998244353;

void solve(){
    ll n;
    cin>>n;
    std::vector<ll> v(n+1);
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    ll dp[n+1][10];
    memset(dp,0,sizeof(dp));
    dp[1][v[1]] = 1;
    for(ll i=1;i<=n-1;i++){
        for(ll j=0;j<=9;j++){
            dp[i+1][(j+v[i+1])%10] = ((dp[i+1][(j+v[i+1])%10])%mod + dp[i][j]%mod)%mod;
            // cout<<dp[i+1][(j+v[i+1])%10]<<" ";
            dp[i+1][(j*v[i+1])%10] = ((dp[i+1][(j*v[i+1])%10])%mod + dp[i][j]%mod)%mod;
            // cout<<dp[i+1][(j*v[i+1])%10]<<" ";
        }
    }

    for(ll i=0;i<=9;i++){
        cout<<dp[n][i]<<"\n";
    }
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