#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod=1000000007;

void solve(){
    ll n;
    cin>>n;
    std::vector<ll> v(n);
    set<ll>s;
    std::vector<ll> freq(200009,0);
    ll cur=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v[i] = x;
        freq[x] = freq[x] + 1;
        while(freq[cur]!=0){
            ++cur;
        }
        cout<<cur<<"\n";

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