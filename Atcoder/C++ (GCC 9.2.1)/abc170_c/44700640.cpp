#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod=1000000007;

void solve(){
    ll x,n;
    cin>>x>>n;
    std::vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    std::vector<ll> visited(105,-1);
    for(ll i=0;i<n;i++){
        visited[v[i]] = +1;
    }
    ll ans=0;
    ll curMin=INT_MAX;
    for(ll i=-101;i<=101;i++){
        if(visited[i]==-1){
            if(abs(x-i) < curMin){
                ans = i;
                curMin = abs(x-i);
            }
        }
    }
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