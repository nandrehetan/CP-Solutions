// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
// #pragma GCC optimize("unroll-loops")
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
 
// using namespace __gnu_pbds;
//Hetan Nandre's code 
#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(0);cin.tie(nullptr);cout.tie(0);cout << fixed << setprecision(6)
#define PDD pair<double, double> 
#define PI acos(-1)
#define sz(a) (int)(a).size()
#define endl '\n'
#define mod 1000000007
using namespace std;
 
#define fi first
#define se second
#define rep(i,s,t) for(int i=(s),_t=(t);i<_t;++i)
#define per(i,s,t) for(int i=(t)-1,_s=(s);i>=_s;--i)
#define debug(x) cerr<<#x<<" == "<<x<<endl
#define bug(x) cerr<<#x<<" == "<<x<<" "
typedef long long ll;
typedef unsigned long long ull;
template<class T>
inline void rd(T &x){
    x=0;char c;int f=1;
    while(c=getchar(),c<48)if(c=='-')f=-1;
    do x=x*10+(c&15);
    while(c=getchar(),c>47);
    x*=f;
}
template<class T>void pf(T x){
    if(x<0)putchar('-'),x=-x;
    else if(!x){
        putchar('0');
        return ;
    }
    static int stk[100],tp;
    for(tp=0;x;x/=10)stk[tp++]=x%10;
    while(tp)putchar(stk[--tp]^48);
}
template<class T>void ptn(T x){
    pf(x),putchar('\n');
}
template<class T>void Min(T &A,T B){
    if(A>B)A=B;
}
 
const int N=(int)1e6+5,INF=(1<<30);
struct node{
    int l,r,id;
    bool operator<(const node&A)const {
        return r<A.r;
    }
}Q[N*3];
int ans[N*3];
int a[N],*lst[N<<2],TAT[N*18],*pre=TAT,Mi[N<<2];
#define ls (p<<1)
#define rs (p<<1|1)
void build(int L,int R,int p){
    Mi[p]=INF;
    if(L==R)return ;
    int sz=R-L+1,mid=(L+R)>>1;
    lst[p]=pre;pre+=sz;
    rep(i,0,sz)lst[p][i]=a[i+L];
    sort(lst[p],lst[p]+sz);
    build(L,mid,ls);build(mid+1,R,rs);
}
int n,m;
int query(int l,int r,int L,int R,int p){
    if(l<=L&&r>=R)return Mi[p];
    int mid=(L+R)>>1,ans=INF;
    if(l<=mid)Min(ans,query(l,r,L,mid,ls));
    if(r>mid)Min(ans,query(l,r,mid+1,R,rs));
    return ans;
}
int pos=1,v,res;
void update(int L,int R,int p){
    if(L==R){
        Min(Mi[p],abs(a[L]-v));
        Min(res,Mi[p]);
        return ;
    }
    if(R<=pos){
        int *it=lower_bound(lst[p],lst[p]+R-L+1,v);
        if((it==lst[p]||res<=v-*(it-1))&&(it==lst[p]+R-L+1||res<=*it-v)){
            Min(res,Mi[p]);
            return ;
        }
    }
    int mid=(L+R)>>1;
    if(pos>mid)update(mid+1,R,rs);
    update(L,mid,ls);
    Min(Mi[p]=Mi[ls],Mi[rs]);
}
void solve(){
    rd(n);
    rd(m);
    rep(i,1,n+1)rd(a[i]);
    
    build(1,n,1);
    rep(i,1,m+1)Q[i].id=i,rd(Q[i].l),rd(Q[i].r);
    sort(Q+1,Q+1+m);
    rep(i,1,m+1){
        while(pos<Q[i].r)
            res=INF,v=a[pos+1],update(1,n,1),pos++;
        ans[Q[i].id]=query(Q[i].l,Q[i].r,1,n,1);
    }
    rep(i,1,m+1)ptn(ans[i]);
 
}
signed main(){
    ios;
 
    // init();
    int t = 1;
    // cin >> _;
    while(t --){
        solve();
    }
 
    return 0;
}
 
 