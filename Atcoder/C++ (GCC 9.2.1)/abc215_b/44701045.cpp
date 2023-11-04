#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod=1000000007;

void solve(){
    unsigned long long n;
    cin>>n;
    
    // unsigned long long low = 1;
    // unsigned long long high = n;
    // unsigned long long ans=0;
    // while(low <= high) {
    //     unsigned long long mid = low+(high-low)/2;

    //     if((1ll<<mid)<=n){
    //         low = mid+1;
    //         ans=mid;
    //     }else{
    //         high=mid-1;
    //     }
    // }
    cout<<floor(log2((long double)n));
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